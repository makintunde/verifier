//
// Created by michael on 26/01/16.
//

#include "and_token.h"

bool AndToken::Evaluate(std::string w) {
    return _operand_1->Evaluate(w) && _r_operand->Evaluate(w);
}
