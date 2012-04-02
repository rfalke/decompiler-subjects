(*
 * $Id: except.ocaml,v 1.6 2001/07/28 21:52:57 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 * and Mark Baker
 *)

exception HiException of int
exception LoException of int

let hi = ref 0
let lo = ref 0

let blowup n =
  if n mod 2 = 0 then raise (LoException n)
  else raise (HiException n)

let lo_fun n = try blowup n with LoException _ -> incr lo
let hi_fun n = try lo_fun n with HiException _ -> incr hi

let some_fun n =
  try hi_fun n with exc -> print_endline "Should not get here."; raise exc

let _ =
  let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1 in
  for i = 1 to n do some_fun i done;
  Printf.printf "Exceptions: HI=%d / LO=%d\n" !hi !lo
