Printf.printf "%s" (Llbuild.get_full_version ())

let () = assert (Llbuild.get_full_version () = "llbuild version 5.2")
