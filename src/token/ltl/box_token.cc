//
// Created by michael on 27/01/16.
//

#include <memory>
#include "box_token.h"

bool BoxToken::Evaluate(std::shared_ptr<Path> path) {
    size_t n = path->GetSize();
    for (size_t i = 0; i < n; ++i) {
        std::shared_ptr<Path> new_path(new Path(path->GetSubPath(i)));
        if (!_operand->Evaluate(new_path)) {
            return false;
        }
    }
    return true;
}
