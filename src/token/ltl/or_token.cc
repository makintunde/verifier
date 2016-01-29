//
// Created by michael on 29/01/16.
//

#include "or_token.h"

bool OrToken::Evaluate(Path *path) {
    return _operand_1->Evaluate(path) || _operand_2->Evaluate(path);
}
