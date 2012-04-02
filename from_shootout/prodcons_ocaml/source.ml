(*
 * $Id: prodcons.ocaml,v 1.6 2001/07/28 21:52:59 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 *
 * ocamlopt -thread unix.cmxa threads.cmxa prodcons.ml -o prodcons
 *  or
 * ocamlc -thread unix.cma threads.cma prodcons.ml -o prodcons
 *)

let count = ref 0
let data = ref 0
let produced = ref 0
let consumed = ref 0
let m = Mutex.create ()
let c = Condition.create ()

let producer n =
  for i = 1 to n do
    Mutex.lock m;
    while !count = 1 do Condition.wait c m done;
    data := i;
    incr count;
    Condition.signal c;
    Mutex.unlock m;
    incr produced
  done

let consumer n =
  let i = ref 0 in
  while !i <> n do
    Mutex.lock m;
    while !count = 0 do Condition.wait c m done;
    i := !data;
    decr count;
    Condition.signal c;
    Mutex.unlock m;
    incr consumed
  done

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1
let p = Thread.create producer n and c = Thread.create consumer n;;
Thread.join p; Thread.join c;
Printf.printf "%d %d\n" !produced !consumed
