(*
 * $Id: strcat.ocaml2.ocaml,v 1.1 2001/01/31 03:38:54 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 *)

let _ =
  let n =
    try int_of_string Sys.argv.(1)
    with Invalid_argument _ -> 1 in
  let str = ref "" in
  for i = 1 to n do
    str := !str ^ "hello\n"
  done;
  Printf.printf "%d\n" (String.length !str)

