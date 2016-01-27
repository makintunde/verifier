//
// Created by michael on 26/01/16.
//

#include "and_token.h"

bool and_token::Evaluate() {
    return _l_operand->Evaluate() && _r_operand->Evaluate();
}
