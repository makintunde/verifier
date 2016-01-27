//
// Created by michael on 26/01/16.
//

#include "and_token.h"

bool and_token::Evaluate(std::string w) {
    return _l_operand->Evaluate(w) && _r_operand->Evaluate(w);
}
