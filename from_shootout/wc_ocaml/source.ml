(*
 * $Id: wc.ocaml,v 1.8 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * based on code by Cuihtlauac ALVARADO and Markus Mottl
 *)

let nl = ref 0 and nw = ref 0 and nc = ref 0 and max = 4096
let buf = String.create max

let readblock scanfun =
  let nread = input stdin buf 0 max in
  if nread = 0 then ()
  else begin nc := !nc + nread; scanfun 0 nread end

let rec scan_out_of_word i n =
  if i < n then
    match buf.[i] with
    | '\n' -> incr nl; scan_out_of_word (i + 1) n
    | ' ' | '\t' -> scan_out_of_word (i + 1) n
    | _ -> incr nw; scan_in_word (i+1) n
  else readblock scan_out_of_word

and scan_in_word i n =
  if i < n then
    match buf.[i] with
    | '\n' -> incr nl; scan_out_of_word (i + 1) n
    | ' '|'\t' -> scan_out_of_word (i + 1) n
    | _ -> scan_in_word (i + 1) n
  else readblock scan_in_word;;

scan_out_of_word 0 0;
Printf.printf "%d %d %d\n" !nl !nw !nc
