#define CAML_NAME_SPACE
#include <caml/mlvalues.h>
#include <caml/fail.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/custom.h>

#include "llbuild.h"

CAMLprim value
caml_llb_get_full_version_string(value unit) {
  CAMLparam1(unit);
  const char* version = llb_get_full_version_string();
  CAMLreturn(caml_copy_string(version));
}
