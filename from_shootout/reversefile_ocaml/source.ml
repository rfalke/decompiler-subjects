(*
 * $Id: reversefile.ocaml,v 1.12 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * author: Jean-Francois Monin
 * date: Thu Jan 27 00:28:51 CET 2001
 * France Telecom R & D, Lannion
 * ocamlopt -noassert -unsafe -ccopt -O3 rev.ml -o rev
 *)

let size = 10000

let rec lect stack buf pos free =
  let nrd = input stdin buf pos free in
  if nrd = 0 then stack, buf, pos (* buf filled only until pos *)
  else if nrd = free then lect (buf :: stack) (String.create size) 0 size
  else lect stack buf (pos + nrd) (free - nrd)

let output_buf (buf, len) = output stdout buf 0 len

let rec rev_write tail stack buf len pos =
  if pos = 0 then
    match stack with
    | [] -> output stdout buf 0 len; List.iter output_buf tail
    | topbuf :: stack ->
        let toplen = String.length topbuf in
        rev_write ((buf, len) :: tail) stack topbuf toplen toplen
  else if buf.[pos - 1] = '\n' then
    begin
      output stdout buf pos (len - pos);
      List.iter output_buf tail;
      rev_write [] stack buf pos (pos - 1)
    end
  else rev_write tail stack buf len (pos - 1);;

let stack, buf, length = lect [] (String.create size) 0 size;;
rev_write [] stack buf length length
