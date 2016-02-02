//
// Created by michael on 02/02/16.
//

#include "f_token.h"

bool FToken::Evaluate(std::shared_ptr<Path> path) {
    for (size_t i = 0; i < path->GetSize(); ++i) {
        std::vector<std::string> sub_path = path->GetSubPath(i);
        if (_operand->Evaluate(std::shared_ptr<Path>(new Path(sub_path)))) {
            return true;
        }
    }
    return false;
}
