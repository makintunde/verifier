//
// Created by michael on 29/01/16.
//

#include "or_token.h"

bool OrToken::Evaluate(std::string w) {
    return _operand_1->Evaluate(w) || _operand_2->Evaluate(w);
}
