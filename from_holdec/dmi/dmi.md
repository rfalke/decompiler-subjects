[//]: # (Use http://markdowntable.com/ for formatting the tables in markdown!)

* "+" means: the output is the expected
* "1/2" means: the output is like the expected but there is a shortcoming
* "0" means: the expected specific output is not there
* "-" means: the output has the wrong semantic

## CFG

| Test                                      | Ghidra                         | Hex-Rays                            | Reko                           | Retdec                                   | Snowman                                              | Holdec                     |
|-------------------------------------------|--------------------------------|-------------------------------------|--------------------------------|------------------------------------------|------------------------------------------------------|----------------------------|
| basic1: if                                | 1/2 (value should be inverted) | +                                   | 1/2 (value should be inverted) | 1/2 (value should be inverted)           | 1/2 (double return)                                  | +                          |
| basic2: if-else                           | +                              | +                                   | +                              | +                                        | 1/2 (double return)                                  | +                          |
| basic3: if-elseif                         | 1/2 (double return)            | 1/2 (double return, else-string)    | 1/2 (value should be inverted) | 1/2 (double return)                      | 1/2 (double return)                                  | +                          |
| basic4: if-elseif-else                    | +                              | 1/2 (double return)                 | +                              | 1/2 (double return)                      | 1/2 (double return)                                  | +                          |
| basic5: head-loop                         | +                              | +                                   | 1/2 (extra cast)               | 0 (lot of noise)                         | +                                                    | +                          |
| basic6: tail-loop                         | +                              | +                                   | 1/2 (extra cast)               | 0 (lot of noise)                         | +                                                    | +                          |
| basic7: for-loop                          | 0                              | +                                   | +                              | - (loop ok, value flow in method broken) | 0                                                    | 0                          |
| basic8: forever-loop                      | +                              | +                                   | +                              | +                                        | 1/2 (noise)                                          | +                          |
| basic9: dead block                        | +                              | +                                   | +                              | +                                        | +                                                    | +                          |
| **Sum basic**                             | 7                              | 8                                   | 7                              | 4.5                                      | 5.5                                                  | 8                          |
| inter1: and                               | +                              | +                                   | +                              | 1/2 (extra !, not short cuircut)         | +                                                    | +                          |
| inter2: or                                | 1/2 (double return)            | 1/2 (double return)                 | 1/2 (value should be inverted) | 1/2 (not short cuircut)                  | 1/2 (double return)                                  | +                          |
| inter10: loop with break                  | +                              | +                                   | +                              | 0 (noise, duplicated blocks)             | 1/2 (creative but hard to understand, unused declar) | +                          |
| inter11: loop with breaks                 | +                              | +                                   | +                              | 0 (noise)                                | 1/2 (extra casts)                                    | 1/2 (extra cond var)       |
| inter11: x!=0 && x>=0 to x>0 (really exp) | +                              | +                                   | +                              | 0                                        | 0                                                    | +                          |
| inter12: loop with break block            | 1/2 (double return)            | 1/2 (double return)                 | +                              | 0 (noise, goto)                          | - (call duplicated, also goto)                       | +                          |
| inter13: loop with continue               | +                              | +                                   | +                              | 1/2 (noise)                              | +                                                    | +                          |
| inter14: loop with continues              | 1/2 (3 nested loops)           | +                                   | +                              | 1/2 (noise)                              | - (call duplicated)                                  | +                          |
| inter15: loop with continue block         | 1/2 (3 nested loops)           | +                                   | +                              | 1/2 (noise)                              | - (call duplicated)                                  | +                          |
| inter16: loop with break and continue     | +                              | 1/2 (double return, string literal) | +                              | 1/2 (noise)                              | +                                                    | +                          |
| inter17: stmt after forever               | +                              | +                                   | +                              | +                                        | +                                                    | +                          |
| inter20: nested loops                     | +                              | +                                   | +                              | 0 (not tail, noise)                      | +                                                    | +                          |
| inter30: switch-case                      | +                              | 1/4 (goto, extra func, jump)        | 1/2 (goto)                     | + (small noise)                          | +                                                    | 1/2 (cond could be better) |
| **Sum inter**                             | 11                             | 10                                  | 12                             | 5                                        | 8-3                                                  | 12                         |
| advan1: multiple entry                    | +                              | +                                   | 0 (loop with goto, noise)      | 0 (noise, loop with goto)                | +                                                    | 0                          |
| advan2: multiple exit                     | +                              | 0 (goto)                            | +                              | 1/2 (noise, block duplicated)            | 0 (goto)                                             | +                          |
| advan10: irreducible                      | +                              | +                                   | +                              | + (block duplicated)                     | +                                                    | +                          |
| advan11: ???                              |                                |                                     |                                |                                          |                                                      |                            |
| advan12: nested                           | + (goto)                       | + (goto)                            | + (without goto)               | 1/2 (noise)                              | + (goto)                                             | + (without goto)           |
| advan20: jump table on stack              | 0                              | 0                                   | 0                              | 0                                        | 0                                                    | 0                          |
| advan21: computed jump                    | 0                              | 0                                   | 1/2 (case 2 missing)           | 0                                        | 0                                                    | 0                          |
| inter11: convert if-tail to head          | 0                              | 0                                   | 0                              | 0                                        | 0                                                    | 0                          |
| **Sum advan**                             | 4                              | 3                                   | 3.5                            | 2                                        | 3                                                    | 3                          |
| **Sum all**                               | 22                             | 21                                  | 22.5                           | 11.5                                     | 13.5                                                 | 23                         |

### Remarks:
* retdec is noisy: https://github.com/avast-tl/retdec/issues/389
* snowman duplicated calls: https://github.com/yegord/snowman/issues/180
* reko has problems with rand() but not time(): https://github.com/uxmal/reko/issues/679
* snowman doesn't recognize function names in cfg: https://github.com/yegord/snowman/issues/181
* decompilers should output for loop: https://github.com/uxmal/reko/issues/680 https://github.com/yegord/snowman/issues/182 https://github.com/avast-tl/retdec/issues/390
* reko has extra cast in output: https://github.com/uxmal/reko/issues/681
* decompilers like multiple returns but they make the output larger (TODO: create some issues)

### TODO
* conditional tail calls
* shared tail blocks
* running into the next function
* reflects: call foo; foo: jmp bar; bar: real methodx


## Expression

| Test                        | Ghidra                   | Hex-Rays                 | Reko | Retdec            | Snowman | Holdec |
|-----------------------------|--------------------------|--------------------------|------|-------------------|---------|--------|
| inter1: constant false cond | 1/2 (2 killed, one left) | 1/2 (2 killed, one left) | 0    | 0                 | 0       | +      |
| inter2: extra constant cmp  | 0 (1 killed)             | +                        | 0    | 2/3 (one missing) | 0       | +      |
| inter3: div by mult         | +                        | +                        | 0    | 0 (wrong decomp)  | 0       | +      |
| inter4: swap with xor       | 0                        | 0                        | 0    | +                 | 0       | +      |
| advan1: table minization    | 0                        | 0                        | 0    | 0                 | 0       | +      |
| **Sum all**                 | 1.5                      | 2                        | 0    | 1.7               | 0       | 5      |

### TODO
* Test wraping: -(-128) => -128
* Test wraping: 2*x == 10 => (x==5 || x==133)

## Value propagation

| Test                           | Ghidra          | Hex-Rays | Reko              | Retdec        | Snowman                       | Holdec |
|--------------------------------|-----------------|----------|-------------------|---------------|-------------------------------|--------|
| basic1: reg in block           | +               | +        | +                 | +             | +                             | +      |
| basic2: reg in prev block      | +               | +        | +                 | +             | 1/2 (values are not combined) | +      |
| basic4: reg in 2 blocks incr   | +               | +        | +                 | +             | +                             | +      |
| basic6: most basic case        | +               | +        | +                 | +             | +                             | +      |
| inter1: mem in block           | +               | +        | 0 (performs read) | +             | 0 (performs read)             | +      |
| inter2: mem in prev block      | +               | +        | 0 (performs read) | +             | 0 (performs read)             | +      |
| inter5: merge writes in blocks | 0               | 0        | 0                 | +             | 0                             | 0      |
| inter6: mem overwrite in block | +               | +        | 0                 | +             | 0                             | +      |
| inter10: subregs               | 1/2 (noise)     | +        | 0                 | 1/2 (noise)   | 0                             | +      |
| advan1: merge writes           | 0               | 0        | 0                 | 0             | 0                             | 0      |
| advan2: prop value             | 0               | +        | 0                 | 0             | 0                             | 0      |
| advan3: value analysis         | 1/2 (== cmp ok) | +        | 0                 | 3/4 (partial) | 0                             | 0      |
| **Sum all**                    | 8               | 10       | 4                 | 9.25          | 2.5                           | 8      |

### Remarks
* basic3, basic5 tests the ternary detection which was already covered in transformation:inter1

## Transformation

| Test                       | Ghidra      | Hex-Rays    | Reko   | Retdec | Snowman     | Holdec |
|----------------------------|-------------|-------------|--------|--------|-------------|--------|
| basic1: simple ternary     | +           | +           | +      | +      | 3/4 (noise) | +      |
| basic2: ternary            | 0 (if)      | 0 (if)      | 0 (if) | +      | 0 (if)      | +      |
| inter1: simple ternary cfg | +           | +           | 0 (if) | +      | 0 (if)      | +      |
| inter2: ternary cfg        | 0 (if)      | 0 (if)      | 0 (if) | +      | 0 (if)      | +      |
| inter10: 64bit math        | 1/2 (noise) | 1/2 (parts) | 0      | 0      | 0           | 0      |
| advan1: unrolled loop      | 0           | 0           | 0      | 0      | 0           | 0      |
| **Sum all**                | 2.5         | 2.5         | 1.5    | 4      | 0.75        | 4      |
