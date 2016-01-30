//
// Created by michael on 27/01/16.
//

#include "next_token.h"

bool NextToken::Evaluate(std::shared_ptr<Path> path) {
    std::shared_ptr<Path> next_path(new Path(path->GetSubPath(1)));
    return _operand->Evaluate(next_path);
}
