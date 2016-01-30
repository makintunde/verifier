//
// Created by michael on 26/01/16.
//

#include "and_token.h"

bool AndToken::Evaluate(std::string w) {
    return _operand_1->Evaluate(w) && _operand_2->Evaluate(w);
}
