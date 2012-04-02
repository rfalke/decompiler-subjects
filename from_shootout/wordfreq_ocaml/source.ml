(*
 * $Id: wordfreq.ocaml,v 1.11 2001/08/02 01:33:03 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let max = 4096
let buf = String.create max
let count = Hashtbl.create 75000 and wbuf = Buffer.create 64
let to_list w c l = Printf.sprintf "%7d\t%s" !c w :: l

let rec scan_words i n inword =
  if i < n then
    let c = buf.[i] in
    if 'a' <= c && c <= 'z' then begin
      Buffer.add_char wbuf c;
      scan_words (i + 1) n true
    end
    else if 'A' <= c && c <= 'Z' then begin
      Buffer.add_char wbuf (Char.unsafe_chr (Char.code c + 32));
      scan_words (i + 1) n true
    end
    else if inword then begin
      let word = Buffer.contents wbuf in
      begin try incr (Hashtbl.find count word)
      with Not_found -> Hashtbl.add count word (ref 1) end;
      Buffer.clear wbuf;
      scan_words (i + 1) n false
    end
    else scan_words (i + 1) n false
  else
    let nread = input stdin buf 0 max in
    if nread <> 0 then scan_words 0 nread inword;;

scan_words 0 0 false;
let out_lines = Hashtbl.fold to_list count [] in
List.iter print_endline (List.sort (fun a b -> compare b a) out_lines)
