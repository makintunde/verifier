//
// Created by michael on 27/01/16.
//

#ifndef VERIFIER_LTL_TOKEN_H
#define VERIFIER_LTL_TOKEN_H

#include "../../model/path.h"
#include "../../model/model.h"
#include <memory>

class LtlToken {
public:
    LtlToken(std::shared_ptr<Path> _path, std::shared_ptr<Model> _model) :
            _path(_path), _model(_model) { }
    virtual bool Evaluate(std::shared_ptr<Path> path) = 0;

protected:
    std::shared_ptr<Path> _path;
    std::shared_ptr<Model> _model;
};

#endif //VERIFIER_LTL_TOKEN_H
