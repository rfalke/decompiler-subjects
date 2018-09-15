* "+" means: the output is the expected
* "1/2" means: the output is like the expected but there is a shortcoming
* "0" means: the expected specific output is not there
* "-" means: the output has the wrong semantic

## CFG

| Test             | Hex-Rays  | Reko | Retdec | Snowman | Holdec |
| -------------    | -----     | -----| -----  | -----   | ------ |
| basic1: if       | +         | 1/2 (value should be inverted) | +      | 1/2 (double return) | + |
| basic2: if-else  | +         | +    | 1/2 (double return)     | 1/2 (double return)    | + |
| basic3: if-elseif  | 1/2 (double return, else-string)         | 1/2 (value should be inverted) | 1/2 (switch-case)  | 1/2 (double return)  | + |
| basic4: if-elseif-else  | 1/2 (double return)        | +  | 1/2 (double return)      | 1/2 (double return)    |  + |
| basic5: head-loop  | +       | 1/2 (extra cast)      | 0 (lot of noise)    | + |  + |
| basic6: tail-loop  | +       | 1/2 (extra cast)      | 0 (lot of noise)    | + |  + |
| basic7: for-loop  | +       | 0   | 0     | 0 | 0 |
| basic8: forever-loop  | +       | +   | +     | 1/2 (noise) |  + |
| basic9: dead block  | +       | +   | +     | + |  + |
| **Sum basic** | 8  | 6  | 4 | 5.5 | 8 |
| inter1: and  | +         | +  | 1/2 (extra !, not short cuircut)      | +    | + |
| inter2: or  | 1/2 (double return)         | 1/2 (value should be inverted)  | 1/2 (not short cuircut)      | 1/2 (double return)   | + |
| inter10: loop with break  | +       | + | 1/2 (noise)      | 1/2 (creative but hard to understand, unused declar)   |  + |
| inter11: loop with breaks  | +       | + | 0 (noise)      | 1/2 (extra casts)   |   1/2 (extra cond var) |
| inter11: x!=0 && x>=0 to x>0 (really exp)  | + | + | 0 | 0 | + |
| inter12: loop with break block  | 1/2 (double return)       | + | 0 (noise)      | - (call duplicated, also goto)   |  + |
| inter13: loop with continue  | +   | +  | 0 (noise, extra goto)      | + | + |
| inter14: loop with continues  | +   | +  | 0 (noise, extra goto)      | - (call duplicated) |  + |
| inter15: loop with continue block  | +   | +  | 0 (noise, extra goto)      | - (call duplicated) | + |
| inter16: loop with break and continue  | 1/2 (double return, string literal)  | +  | 0 (noise, extra goto)      | + |  + |
| inter17: stmt after forever  | +  | +  | + | + | + |
| inter20: nested loops | +  | +  | 0 (not tail, noise) | + | + |
| inter30: switch-case |  1/4 (goto, extra func, jump) | 1/2 (goto)  | 1/2 (noise, block duplicated) | + | 1/2 (cond could be better) |
| **Sum inter** | 10  | 12  | 3.5 | 8 | 12 |
| advan1: multiple entry | + | 0 (loop with goto)  | 0 (noise, loop with goto) | + | 0 |
| advan2: multiple exit |  0 (goto) | +  | 1/4 (noise) | 0 (goto) |  + |
| advan10: irreducible |  + | +  | + (block duplicated) | + | + |
| advan11: ??? |   |   |  |  |
| advan12: nested | + (goto)  | + (without goto)  | 1/2 (noise) | + (goto) | + (without goto) |
| advan20: jump table on stack | 0  | 0  | 0 | 0 | 0 |
| advan21: computed jump | 0  | 0  | 0 | 0 | 0 |
| inter11: convert if-tail to head  | 0 | 0 | 0 | 0 | 0 |
| **Sum advan** | 3  | 3  | 2 | 3 | 3 |

### Remarks:
* retdec is noisy: https://github.com/avast-tl/retdec/issues/389
* snowman duplicated calls: https://github.com/yegord/snowman/issues/180
* reko has problems with rand() but not time(): https://github.com/uxmal/reko/issues/679
* snowman doesn't recognize function names in cfg: https://github.com/yegord/snowman/issues/181
* decompilers should output for loop: https://github.com/uxmal/reko/issues/680 https://github.com/yegord/snowman/issues/182 https://github.com/avast-tl/retdec/issues/390
* reko has extra cast in output: https://github.com/uxmal/reko/issues/681
* decompilers like multiple returns but they make the output larger (TODO: create some issues)
