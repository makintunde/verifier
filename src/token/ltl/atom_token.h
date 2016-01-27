//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_ATOM_TOKEN_H
#define VERIFIER_ATOM_TOKEN_H


#include "token.h"
#include <string>
#include <vector>

class AtomToken : LtlToken {
public:
    AtomToken(Model *_model, std::string _atom, Path _path) : LtlToken(_path, _model), _atom(_atom) {}
    bool Evaluate();

private:
    std::string _atom;

};


#endif //VERIFIER_ATOM_TOKEN_H