#include <janet.h>
#include <uuid/uuid.h>

/* Heavily inspired by https://stackoverflow.com/a/51068240 */

static Janet generate(int32_t argc, const Janet *argv) {
  janet_fixarity(argc, 0);

  uuid_t binuuid;

  /*
   * Generate a UUID. We're not done yet, though,
   * for the UUID generated is in binary format
   * (hence the variable name). We must 'unparse'
   * binuuid to get a usable 36-character string.
   */
  uuid_generate_random(binuuid);

  /*
   * uuid_unparse() doesn't allocate memory for itself, so do that with
   * malloc(). 37 is the length of a UUID (36 characters), plus '\0'.
   */
  char *uuid = malloc(36);

  uuid_unparse_upper(binuuid, uuid);

  return janet_stringv((const uint8_t *) uuid, 36);
}

static const JanetReg cfuns[] = {
  {"generate", generate, "(uuid/generate)\n\nGenerates a uuid."},
  {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
  janet_cfuns(env, "uuid", cfuns);
}
