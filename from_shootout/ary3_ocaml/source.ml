(*
 * $Id: ary3.ocaml,v 1.2 2001/07/28 21:52:55 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let _ =
  let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1 in
  let lix = n - 1 and x = Array.make n 0 and y = Array.make n 0 in
  for i = 0 to lix do x.(i) <- i + 1 done;
  for k = 0 to 999 do for i = lix downto 0 do y.(i) <- x.(i) + y.(i) done done;
  Printf.printf "%d %d\n" y.(0) y.(lix)
