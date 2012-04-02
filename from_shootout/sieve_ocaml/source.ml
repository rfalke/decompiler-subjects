(*
 * $Id: sieve.ocaml,v 1.12 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * based on code from Markus Mottl
 * slightly improved by Claude Marche and Jean-Christophe Filliatre
 *)

let init_flags = String.make 8193 't'
let flags = String.make 8193 't'

let rec inner_loop f i k =
  if k < 8193 then begin f.[k] <- 'f'; inner_loop f i (k + i) end

let rec middle_loop f i cnt =
  if i < 8193 then
    if f.[i] = 't' then begin
      inner_loop f i (i + i);
      middle_loop f (i + 1) (cnt + 1) end
    else middle_loop f (i + 1) cnt
  else cnt

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1;;
for iter = 2 to n do
  String.blit init_flags 0 flags 0 8193;
  ignore (middle_loop flags 2 0);
done;
Printf.printf "Count: %d\n" (middle_loop flags 2 0)
