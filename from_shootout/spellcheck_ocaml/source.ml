(*
 * $Id: spellcheck.ocaml,v 1.7 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let dict = Hashtbl.create 40000 and ic = open_in "Usr.Dict.Words" in
try while true do Hashtbl.add dict (input_line ic) true done
with End_of_file -> close_in ic;
let rec loop () =
  let word = input_line stdin in
  if not (Hashtbl.mem dict word) then print_endline word;
  loop () in
try loop () with End_of_file -> ()
