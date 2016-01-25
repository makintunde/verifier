//
// Created by michael on 25/01/16.
//

#include "path.h"

std::vector<std::string> Path::GetSubPath(size_t index) {
    std::vector<std::string> ret;
    for (size_t i = 0; i < index; ++i) {
        ret.push_back(_states[i]);
    }
    return ret;
}
