//
// Created by michael on 26/01/16.
//

#include "diamond_token.h"

bool diamond_token::Evaluate(std::string w) {
    for (auto relation : _model->get_relations()) {
        if (relation.first == w) {
            return _operand->Evaluate(relation.second);
        }
    }
    return false;
}
