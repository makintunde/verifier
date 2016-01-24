//
// Created by michael on 24/01/16.
//

#include "box_token.h"

bool BoxToken::Evaluate(std::string w) {
    const std::vector<std::string> worlds = _model->get_W();
    for (auto world : worlds) {
        for (auto relation : _model->get_relations()) {
            if (w == relation.first && world == relation.second) {
                if (!_operand->Evaluate(world)) return false;
            }
        }
    }
    return true;
}


