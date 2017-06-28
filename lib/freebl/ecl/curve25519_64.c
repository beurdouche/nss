/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "ecl-priv.h"
#include "../verified/Curve25519.h"

SECStatus
ec_Curve25519_mul(uint8_t *mypublic, const uint8_t *secret, const uint8_t *basepoint)
{
    Curve25519_crypto_scalarmult(mypublic, secret, basepoint);
    return 0;
}
