//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_PATH_H
#define VERIFIER_PATH_H

#include <string>
#include <vector>

class Path {
public:
    Path(const std::vector<std::string> &_states) : _states(_states) { }
    std::vector<std::string> GetSubPath(size_t index);
private:
    std::vector<std::string> _states;

};


#endif //VERIFIER_PATH_H
