//
// Created by michael on 27/01/16.
//

#include "box_token.h"

bool BoxToken::Evaluate(Path *path) {
    size_t n = path->GetSize();
    for (size_t i = 0; i < n; ++i) {
        Path *new_path = new Path(path->GetSubPath(i));
        if (!_operand->Evaluate(new_path)) {
            return false;
        }
    }
    return true;
}
