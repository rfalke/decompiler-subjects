(*
 * $Id: strcat.ocaml,v 1.7 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * from: Benedikt Rosenau
 *)

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
let buf = Buffer.create 0;;
for i = 1 to n do Buffer.add_string buf "hello\n" done;
Printf.printf "%d\n" (Buffer.length buf); Unix.sleep(1)
