//
// Created by michael on 24/01/16.
//

#include "atom_token.h"
#include <algorithm>

bool AtomToken::Evaluate(std::string w) {
    std::vector<std::pair<std::string, std::vector<std::string>>> _pi = _model->get_pi();
    auto it = find_if( _pi.begin(), _pi.end(), [&](const std::pair<std::string, std::vector<std::string>>& element) {
        return _atom == element.first;
    } );
    std::vector<std::string> value = it->second;
    return find(value.begin(), value.end(), w) != value.end();
}
