(*
 * $Id: ackermann.ocaml,v 1.10 2001/07/28 21:52:53 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let rec ack m n =
  if m = 0 then n + 1
  else if n = 0 then ack (m - 1) 1
  else ack (m - 1) (ack m (n - 1));;

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1 in
Printf.printf "Ack(3,%d): %d\n" n (ack 3 n)
