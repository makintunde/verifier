//
// Created by michael on 25/01/16.
//

#include "not_token.h"

bool not_token::Evaluate(std::string w) {
    return !(_operand->Evaluatbe(w));
}
