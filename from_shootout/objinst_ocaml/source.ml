(*
 * $Id: objinst.ocaml,v 1.8 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * from: Benedikt Rosenau
 * with contributions from Markus Mottl
 *)

class toggle start_state = object (self)
  val mutable state = start_state

  method value = state
  method activate = state <- not state; self
end

class nth_toggle start_state max_counter = object (self)
  inherit toggle start_state

  val count_max = max_counter
  val mutable counter = 0

  method activate =
    counter <- counter + 1;
    if counter >= count_max then begin
      state <- not state;
      counter <- 0
    end;
    self
end

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
let tog = new toggle true;;
for i = 1 to 5 do Printf.printf "%b\n" tog#activate#value done;
for i = 1 to n do ignore (new toggle true) done;
print_newline ();
let ntog = new nth_toggle true 3 in
for i = 1 to 8 do Printf.printf "%b\n" ntog#activate#value done;
for i = 1 to n do ignore (new nth_toggle true 3) done
