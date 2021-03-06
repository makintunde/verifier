//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_ATOM_TOKEN_H
#define VERIFIER_ATOM_TOKEN_H


#include "kripke_token.h"
#include "../../model/model.h"
#include <string>
#include <vector>

class AtomToken : public KripkeToken {
public:
    AtomToken(std::shared_ptr<Model> _model, std::string _atom)
            : KripkeToken(_model), _atom(_atom) {}
    virtual bool Evaluate(std::string w);

private:
    std::string _atom;

};


#endif //VERIFIER_ATOM_TOKEN_H
