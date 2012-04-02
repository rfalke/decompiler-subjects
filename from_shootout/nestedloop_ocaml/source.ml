(*
 * $Id: nestedloop.ocaml,v 1.8 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * based on code from Florian Hars and Markus Mottl
 *)

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
let rec loopF x = function 0 -> x | i -> loopF (x+1) (i-1)
let rec loopE x = function 0 -> x | i -> loopE (loopF x n) (i-1)
let rec loopD x = function 0 -> x | i -> loopD (loopE x n) (i-1)
let rec loopC x = function 0 -> x | i -> loopC (loopD x n) (i-1)
let rec loopB x = function 0 -> x | i -> loopB (loopC x n) (i-1)
let rec loopA x = function 0 -> x | i -> loopA (loopB x n) (i-1);;
Printf.printf "%d\n" (loopA 0 n)
