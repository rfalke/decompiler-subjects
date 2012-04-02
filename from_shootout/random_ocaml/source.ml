(*
 * $Id: random.ocaml,v 1.11 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let im = 139968 and ia = 3877 and ic = 29573 and last_ref = ref 42

let gen_random max =
  let new_last = (!last_ref * ia + ic) mod im in
  last_ref := new_last;
  max *. float_of_int new_last /. float im

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
let rec loop i = let r = gen_random 100.0 in if i > 1 then loop (i - 1) else r;;
Printf.printf "%.9f\n" (loop n)
