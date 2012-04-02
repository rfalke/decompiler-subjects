(*
 * $Id: fibo.ocaml,v 1.4 2001/07/28 21:52:57 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 *)

let rec fib n = if n < 2 then 1 else fib (n - 2) + fib (n - 1)
let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1;;
Printf.printf "%d\n" (fib n)
