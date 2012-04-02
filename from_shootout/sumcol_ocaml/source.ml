(*
 * $Id: sumcol.ocaml,v 1.8 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * from Markus Mottl
 *)

let sum = ref 0
let rec loop () = sum := !sum + int_of_string (input_line stdin); loop ();;
try loop () with End_of_file -> Printf.printf "%d\n" !sum
