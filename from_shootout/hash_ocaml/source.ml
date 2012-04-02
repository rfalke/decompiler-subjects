(*
 * $Id: hash.ocaml,v 1.5 2001/07/28 21:52:57 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let hexdigits =  [| '0'; '1'; '2'; '3'; '4'; '5'; '6'; '7'; '8'; '9';
                    'a'; 'b'; 'c'; 'd'; 'e'; 'f'; |]

let buf = String.create 32

let rec hexstring_of_int idx len = function
  | n when n <= 0 -> String.sub buf idx len
  | n ->
      let new_idx = idx - 1 in
      buf.[new_idx] <- hexdigits.(n land 15);
      hexstring_of_int new_idx (len + 1) (n lsr 4);;

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1 in
let hx = Hashtbl.create n and c = ref 0 in
for i = 1 to n do Hashtbl.add hx (hexstring_of_int 32 0 i) true done;
for i = n downto 1 do if Hashtbl.mem hx (string_of_int i) then incr c done;
Printf.printf "%d\n" !c
