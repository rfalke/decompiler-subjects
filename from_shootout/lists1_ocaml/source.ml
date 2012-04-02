(*
 * $Id: lists1.ocaml,v 1.4 2001/06/30 19:39:17 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 *)

(*
# List.
- : int = 45
 *)

open List
open Printf

let seq n =
  let rec _seq m l = if m = 0 then l else _seq (m - 1) (m::l) in
  _seq n []

let pop_head l =
  let item = hd(!l) in l := tl(!l); item

let push_head l item =
  l := item :: !l

let _ =
  let n =
    try int_of_string Sys.argv.(1)
    with Invalid_argument _ -> 1 in

  (* create list (A) of integers from 1 through N *)
  let a = ref (seq n)

  (* create empty list B *)
  and b = ref [] in

  (* move each individual item from A to B, in a loop, reversing order *)
  let rec loop a b =
    match !a with
      [] -> ()
    | _ -> begin push_head b (pop_head a) ; loop a b end
  in loop a b;

  (* print first 2 items in B *)
  printf "%d %d\n" (hd !b) (hd (tl !b));

  (* reverse B (can be done in place) *)
  b := rev !b;

  (* is 0 a member of B? *)
  if mem 0 !b then print_endline "true" else print_endline "false";

  (* is N a member of B? *)
  if mem n !b then print_endline "true" else print_endline "false";

  (* filter values from B to A that are less than N/2, preserving order *)
  let mid = n/2 in
  a := filter (fun x -> x < mid) !b;

  (* print first ten items of A *)
  let rec print_n n l =
    match l with
      [] -> ()
    | _ -> if n > 0 then begin
	printf "%d%s" (hd l) (if n > 1 then " " else "\n");
	print_n (n - 1) (tl l)
    end
  in print_n 10 !a;

  (* print sum of items in A that are less than 1000 *)
  printf "%d\n" (fold_left (fun ac i -> if i < 1000 then ac + i else ac) 0 !a);

  (* append B to end of A *)
  a := append !a !b;

  (* print length and last element of A *)
  printf "%d %d\n" (length !a) (fold_left (fun ac i -> i) 0 !a);

