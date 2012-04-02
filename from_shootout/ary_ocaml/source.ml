(*
 * $Id: ary.ocaml,v 1.7 2001/05/25 00:11:12 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let _ =
  let n =
    try int_of_string Sys.argv.(1)
    with Invalid_argument _ -> 1 in
  let last = n-1
  and x = Array.make n 0
  and y = Array.make n 0 in
  for i = 0 to last do
    x.(i) <- i
  done;
  for i = last downto 0 do
    y.(i) <- x.(i)
  done;
  Printf.printf "%d\n" y.(last)
