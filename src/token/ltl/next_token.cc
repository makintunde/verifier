//
// Created by michael on 27/01/16.
//

#include "next_token.h"

bool NextToken::Evaluate(Path *path) {
    Path *next_path = new Path(path->GetSubPath(1));
    return _operand->Evaluate(next_path);
}
