//
// Created by michael on 02/02/16.
//

#ifndef VERIFIER_F_TOKEN_H
#define VERIFIER_F_TOKEN_H


#include "ltl_token.h"

class FToken : LtlToken {

public:
    virtual bool Evaluate(std::shared_ptr<Path> path);

    FToken(const std::shared_ptr<Path> &_path,
               const std::shared_ptr<Model> &_model,
               std::shared_ptr<FToken> _operand) : LtlToken(_path, _model),
                                               _operand(_operand) { }

private:
    std::shared_ptr<FToken> _operand;
};


#endif //VERIFIER_F_TOKEN_H
