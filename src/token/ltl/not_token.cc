//
// Created by michael on 25/01/16.
//

#include "not_token.h"

bool NotToken::Evaluate() {
    return !(_operand->Evaluate());
}
