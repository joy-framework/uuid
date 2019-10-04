#include <janet.h>
#include <uuid/uuid.h>

/* Heavily inspired by https://stackoverflow.com/a/51068240 */

static Janet generate(int32_t argc, const Janet *argv) {
  janet_fixarity(argc, 0);

  uuid_t binuuid;

  uuid_generate_random(binuuid);

  char uuid[36];

  uuid_unparse_upper(binuuid, uuid);

  return janet_stringv((const uint8_t *)uuid, 36);
}

static const JanetReg cfuns[] = {
  {"generate", generate, "(uuid/generate)\n\nGenerates a uuid."},
  {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
  janet_cfuns(env, "uuid", cfuns);
}
