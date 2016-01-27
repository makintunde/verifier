//
// Created by michael on 26/01/16.
//

#include "diamond_token.h"

bool DiamondToken::Evaluate(std::string w) {
    for (auto relation : _model->get_relations()) {
        if (relation.first == w) {
            if (_operand->Evaluate(relation.second)) {
                return true;
            }
        }
    }
    return false;
}
