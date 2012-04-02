(*
 * $Id: moments.ocaml,v 1.11 2001/07/28 21:52:58 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * from Markus Mottl
 *)

let cutoff = 5

(* Unscrupulously stolen from Array.stable_sort (OCaml standard distribution) *)
let sort_floats len (ar : float array) =
  let merge src1ofs src1len src2 src2ofs src2len dst dstofs =
    let src1r = src1ofs + src1len and src2r = src2ofs + src2len in
    let rec loop i1 s1 i2 s2 d =
      if s1 <= s2 then begin
        dst.(d) <- s1;
        let i1 = i1 + 1 in
        if i1 < src1r then loop i1 ar.(i1) i2 s2 (d + 1)
        else Array.blit src2 i2 dst (d + 1) (src2r - i2)
      end else begin
        dst.(d) <- s2;
        let i2 = i2 + 1 in
        if i2 < src2r then loop i1 s1 i2 src2.(i2) (d + 1)
        else Array.blit ar i1 dst (d + 1) (src1r - i1)
      end in
    loop src1ofs ar.(src1ofs) src2ofs src2.(src2ofs) dstofs in
  let isortto srcofs dst dstofs len =
    for i = 0 to len - 1 do
      let e = ar.(srcofs + i) and j = ref (dstofs + i - 1) in
      while !j >= dstofs && e <= dst.(!j) do
        dst.(!j + 1) <- dst.(!j);
        decr j;
      done;
      dst.(!j + 1) <- e
    done in
  let rec sortto srcofs dst dstofs len =
    if len <= cutoff then isortto srcofs dst dstofs len else begin
      let l1 = len / 2 in
      let l2 = len - l1 in
      sortto (srcofs + l1) dst (dstofs + l1) l2;
      sortto srcofs ar (srcofs + l2) l1;
      merge (srcofs + l2) l1 dst (dstofs + l1) l2 dst dstofs
    end in
  if len <= cutoff then isortto 0 ar 0 len else begin
    let l1 = len / 2 in
    let l2 = len - l1 in
    let t = Array.make l2 ar.(0) in
    sortto l1 t 0 l2;
    sortto 0 ar l2 l1;
    merge l2 l1 t 0 l2 ar 0
  end

let n_ref = ref 0 and sum_ref = ref 0.0 and size_ref = ref 4096
let nums_ref = ref (Array.create !size_ref 0.0);;

try
  while true do
    let num = float_of_string (input_line stdin) in
    !nums_ref.(!n_ref) <- num;
    sum_ref := !sum_ref +. num;
    incr n_ref;
    let size = !size_ref in
    if !n_ref = size then begin
      let new_size = size lsl 2 in
      size_ref := new_size;
      let new_ar = Array.create new_size 0.0 in
      Array.blit !nums_ref 0 new_ar 0 size;
      nums_ref := new_ar
    end
  done
with End_of_file -> ();

let n = !n_ref and nums = !nums_ref in
let n_float = float n in
let mean = !sum_ref /. n_float
and avg_dev_ref = ref 0.0 and std_dev_ref = ref 0.0 and var_ref = ref 0.0
and skew_ref = ref 0.0 and kurt_ref = ref 0.0 in

for i = 0 to n - 1 do
  let dev = nums.(i) -. mean in
  avg_dev_ref := !avg_dev_ref +. abs_float dev;
  let dev2 = dev *. dev in
  var_ref := !var_ref +. dev2;
  let dev3 = dev2 *. dev in
  skew_ref := !skew_ref +. dev3;
  kurt_ref := !kurt_ref +. dev3 *. dev
done;

let avg_dev = !avg_dev_ref /. n_float and var = !var_ref /. float (n - 1) in
let std_dev = sqrt var in

if var > 0.0 then begin
  skew_ref := !skew_ref /. n_float /. var /. std_dev;
  kurt_ref := !kurt_ref /. n_float /. var /. var -. 3.0
end;

sort_floats n nums;

let median =
  let mid = n lsr 1 in
  if n mod 2 = 1 then nums.(mid)
  else (nums.(mid) +. nums.(mid - 1)) /. 2.0 in

Printf.printf "n:                  %d\n" n;
Printf.printf "median:             %f\n" median;
Printf.printf "mean:               %f\n" mean;
Printf.printf "average_deviation:  %f\n" avg_dev;
Printf.printf "standard_deviation: %f\n" std_dev;
Printf.printf "variance:           %f\n" var;
Printf.printf "skew:               %f\n" !skew_ref;
Printf.printf "kurtosis:           %f\n" !kurt_ref
