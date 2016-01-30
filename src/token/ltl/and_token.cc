//
// Created by michael on 26/01/16.
//

#include "and_token.h"

bool AndToken::Evaluate(std::shared_ptr<Path> path) {
    return _l_operand->Evaluate(path) && _r_operand->Evaluate(path);
}
