(*
 * $Id: echo.ocaml,v 1.9 2001/07/28 21:52:56 doug Exp $
 * http://www.bagley.org/~doug/shootout/
 * with help from Markus Mottl
 *)

open Unix

let data = "Hello there sailor\n"

let rec sock_write sock buf offset = function
  | 0 -> ()
  | len ->
      let nwritten = write sock buf offset len in
      sock_write sock buf (offset + nwritten) (len - nwritten)

let sock_readline buf sock =
  let offset = ref (read sock buf 0 64) in
  while buf.[!offset - 1] <> '\n' do
    offset := !offset + read sock buf !offset 64
  done;
  !offset

let rec buf_ok buf n = n <= 0 || buf.[n] = data.[n] && buf_ok buf (n - 1)

let echo_client n port =
  let sock = socket PF_INET SOCK_STREAM 0 in
  connect sock (ADDR_INET (inet_addr_of_string "127.0.0.1", port));
  let len = String.length data and buf = String.create 64 in
  for i = 1 to n do
    sock_write sock data 0 len;
    let ans_len = sock_readline buf sock in
    if ans_len <> len || not (buf_ok buf (len - 1)) then
      failwith ("client got bad data: " ^ String.sub buf 0 ans_len)
  done;
  close sock

let ssock =
  let ssock = socket PF_INET SOCK_STREAM 0
  and addr = inet_addr_of_string "127.0.0.1" in
  bind ssock (ADDR_INET (addr, 0));
  setsockopt ssock SO_REUSEADDR true;
  listen ssock 2;
  ssock

let get_port sock =
  match getsockname sock with
  | ADDR_INET (_, port) -> port
  | ADDR_UNIX _ -> failwith "getsockname"

let echo_server n =
  let port = get_port ssock and pid = fork() in
  if pid <> 0 then begin
    let csock, addr = accept ssock
    and buf = String.create 64 and len = ref 0 and nread = ref 1 in
    while !nread > 0 do
      nread := read csock buf 0 64;
      sock_write csock buf 0 !nread;
      len := !len + !nread
    done;
    ignore (wait ());
    Printf.printf "server processed %d bytes\n" !len end
  else echo_client n port

let n = if Array.length Sys.argv > 1 then int_of_string Sys.argv.(1) else 1;;
echo_server n
