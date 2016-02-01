//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_TOKEN_H
#define VERIFIER_TOKEN_H


#include "../../model/model.h"
#include <memory>

class KripkeToken {
public:
    KripkeToken() { }
    KripkeToken(std::shared_ptr<Model> _model) : _model(_model) { }
    virtual bool Evaluate(std::string w) = 0;

protected:
    std::shared_ptr<Model> _model;
};


#endif //VERIFIER_TOKEN_H
