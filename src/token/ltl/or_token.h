//
// Created by michael on 29/01/16.
//

#ifndef VERIFIER_OR_TOKEN_H
#define VERIFIER_OR_TOKEN_H


#include "ltl_token.h"

class OrToken : public LtlToken {

public:
    OrToken(std::shared_ptr<Path> _path, std::shared_ptr<Model> _model,
            std::shared_ptr<LtlToken> _operand_1,
            std::shared_ptr<LtlToken> _operand_2) :
            LtlToken(_path, _model),
            _operand_1(_operand_1),
            _operand_2(_operand_2) { }

    virtual bool Evaluate(std::shared_ptr<Path> path);

private:
    std::shared_ptr<LtlToken> _operand_1, _operand_2;
};


#endif //VERIFIER_OR_TOKEN_H
