(*
 * $Id: hash2.ocaml,v 1.4 2001/07/28 21:52:57 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
and hash1 = Hashtbl.create 10000 and hash2 = Hashtbl.create 10000 in
let update_hash2 k v =
  try let valref = Hashtbl.find hash2 k in valref := !valref + !v
  with Not_found -> Hashtbl.add hash2 k (ref !v) in
for i = 0 to 9999 do Hashtbl.add hash1 ("foo_" ^ string_of_int i) (ref i) done;
for i = 1 to n do Hashtbl.iter update_hash2 hash1 done;
Printf.printf "%d %d %d %d\n"
  !(Hashtbl.find hash1 "foo_1") !(Hashtbl.find hash1 "foo_9999")
  !(Hashtbl.find hash2 "foo_1") !(Hashtbl.find hash2 "foo_9999")
