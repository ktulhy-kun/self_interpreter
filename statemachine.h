#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#define STATEMACHINE_COMPATIBILITY "APIv4"

#include <stdio.h>
#include <inttypes.h>
#include "parser.h"
#include "regs.h"

typedef struct _State {
  Regs *regs;
  Program *prg;
  uint64_t cs;
  uint64_t op;
  Bignum *nul;
  Bignum *bnI;
  Bignum *bn1;
  Bignum *res;
  bool quiet;
} State;

Reterr machineInitState(State **state);
void machineFreeState(State *state);
Reterr machine(State *state);
void printState(State *state);

#endif // STATEMACHINE_H
