//
// Created by michael on 25/01/16.
//

#include "not_token.h"

bool NotToken::Evaluate(std::shared_ptr<Path> path) {
    return !(_operand->Evaluate(path));
}
