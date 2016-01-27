//
// Created by michael on 27/01/16.
//

#ifndef VERIFIER_LTL_TOKEN_H
#define VERIFIER_LTL_TOKEN_H

#include <printf.h>
#include "../../model/path.h"
#include "../../model/model.h"

class LtlToken {
public:
    LtlToken(Path *_path, Model *_model) : _path(_path), _model(_model) { }
    virtual bool Evaluate() = 0;

protected:
    Path *_path;
    Model *_model;
};

#endif //VERIFIER_LTL_TOKEN_H
