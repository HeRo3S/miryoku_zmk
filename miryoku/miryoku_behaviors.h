// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP
#if defined (MIRYOKU_HOLD_TRIGGER_LEFT) && defined (MIRYOKU_HOLD_TRIGGER_RIGHT)
  #define U_MTL(MOD, TAP) &u_mtl MOD TAP
  #define U_MTR(MOD, TAP) &u_mtr MOD TAP
#else
  #define U_MTL(MOD, TAP) U_MT(MOD, TAP)
  #define U_MTR(MOD, TAP) U_MT(MOD, TAP)
#endif
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
