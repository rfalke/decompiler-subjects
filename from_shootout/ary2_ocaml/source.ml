(*
 * $Id: ary2.ocaml,v 1.2 2001/01/17 04:15:33 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 *)

let _ =
  let n =
    try int_of_string Sys.argv.(1)
    with Invalid_argument _ -> 1 in
  let last = n-1
  and i = ref 0
  and x = Array.make n 0
  and y = Array.make n 0 in
  while !i < n do
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;

    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
    x.(!i) <- !i; incr i;
  done;
  let i = ref last in
  while !i >= 0 do
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;

    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
    y.(!i) <- x.(!i); decr i;
  done;
  Printf.printf "%d\n" y.(last)
