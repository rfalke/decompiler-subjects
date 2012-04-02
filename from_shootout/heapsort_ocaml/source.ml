(*
 * $Id: heapsort.ocaml,v 1.10 2001/07/28 21:52:57 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

let im = 139968 and ia = 3877 and ic = 29573 and last_ref = ref 42

let gen_random max =
  let new_last = (!last_ref * ia + ic) mod im in
  last_ref := new_last;
  max *. float_of_int new_last /. float im


let heapsort n ra =
  let l = ref ((n lsr 1) + 1)
  and rra = ref 0.0 and i = ref 0 and j = ref 0 and ir = ref n in
  try
    while true do
      if !l > 1 then begin
        decr l;
        rra := ra.(!l)
      end
      else begin
        rra := ra.(!ir);
        ra.(!ir) <- ra.(1);
        decr ir;
        if !ir = 1 then begin
          ra.(1) <- !rra;
          raise Exit
        end
      end;
      i := !l;
      j := !l lsl 1;
      while !j <= !ir do
        if !j < !ir && ra.(!j) < ra.(!j+1) then incr j;
        if !rra < ra.(!j) then begin
          ra.(!i) <- ra.(!j);
          i := !j;
          j := !j + !i
        end
        else j := !ir + 1;
      done;
      ra.(!i) <- !rra;
    done
  with Exit -> ()

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1;;
let ary = Array.init (n + 1) (fun _ -> gen_random 1.0) in
heapsort n ary;
Printf.printf "%.10f\n" ary.(n)
