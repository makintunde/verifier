//
// Created by michael on 28/01/16.
//

#include "until_token.h"

bool UntilToken::Evaluate(std::shared_ptr<Path> path) {
    size_t n = path->GetSize();
    if (n > 1) {
        for (size_t j = 1; j < n; ++j) {
            if (_operand_2->Evaluate(std::shared_ptr<Path>(new Path(path->GetSubPath(j))))) {
                for (size_t k = 0; k < j; ++k) {
                    if (!_operand_1->Evaluate(std::shared_ptr<Path>(new Path(path->GetSubPath(k))))) {
                        return false;
                    }
                }
                return true;
            }
        }
    }
    return false;
}
