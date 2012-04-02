(*
 * $Id: lists.ocaml,v 1.11 2001/07/28 21:52:58 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * from Benedict Rosenau
 * improved by Jean-Christophe Filliatre
 *)

module Deque = struct
  type t = { size: int; mutable first: int; mutable last: int; fld: int array }

  exception Empty
  exception Full

  let empty n =
    let n = max (succ n) 1 in
    { size = n; first = 0; last = 0; fld = Array.make n 0 }

  let iota n =
    let size = succ n in
    { size = size; first = 0; last = n; fld = Array.init size succ }

  let up n s = if n < 0 then n + s else n
  let down n s = if n >= s then n - s else n
  let one_up n s = if n == s - 1 then 0 else n + 1
  let one_down n s = if n == 0 then s - 1 else n - 1

  let length q = up (q.last - q.first) q.size

  let rec array_eq q1 off1 q2 off2 n =
    n == 0 ||
      q1.fld.(off1) == q2.fld.(off2) &&
      (array_eq q1 (one_up off1 q1.size) q2 (one_up off2 q2.size) (n - 1))

  let equal q1 q2 =
    let len1 = length q1 in
    len1 == length q2 && array_eq q1 q1.first q2 q2.first len1

  let nth q n =
    if n < 0 or n >= length q then failwith "nth";
    q.fld.(down (q.first + n) q.size)

  let push_back q elem =
    let last' = one_up q.last q.size in
    if last' == q.first then raise Full;
    q.fld.(q.last) <- elem;
    q.last <- last'

  let take_front q =
    if q.first == q.last then raise Empty;
    let old_first = q.first in
    q.first <- one_up q.first q.size;
    q.fld.(old_first)

  let take_back q =
    if q.first == q.last then raise Empty;
    let new_last = one_down q.last q.size in
    q.last <- new_last;
    q.fld.(new_last)

  let copy q =
    { size = q.size; first = q.first; last = q.last; fld = Array.copy q.fld }

  let reverse q =
    let w = length q in
    for i = 0 to (w lsr 1) - 1 do
      let i1 = down (q.first + i) q.size and i2 = up (q.last - 1 - i) q.size in
      let v1 = q.fld.(i1) in
      q.fld.(i1) <- q.fld.(i2);
      q.fld.(i2) <- v1
    done
end

let test_lists () =
  let size = 10000 in
  let d1 = Deque.iota size in
  let d2 = Deque.copy d1
  and d3 = Deque.empty size in
  for i = 1 to Deque.length d2 do Deque.push_back d3 (Deque.take_front d2) done;
  for i = 1 to Deque.length d3 do Deque.push_back d2 (Deque.take_back d3) done;
  Deque.reverse d1;
  if size <> Deque.nth d1 0 then failwith "First test failed";
  if Deque.length d1 <> Deque.length d2 then failwith "Second test failed";
  if not (Deque.equal d1 d2) then failwith "Third test failed";
  Deque.length d1

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1;;
for i = 2 to n do ignore (test_lists ()) done;
Printf.printf "%d\n" (test_lists ())
