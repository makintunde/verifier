//
// Created by michael on 29/01/16.
//

#ifndef VERIFIER_OR_TOKEN_H
#define VERIFIER_OR_TOKEN_H


#include "ltl_token.h"

class OrToken : public LtlToken {

public:
    virtual bool Evaluate(Path *path);

    OrToken(Path *_path, Model *_model, LtlToken *_operand_1, LtlToken *_operand_2) :
            LtlToken(_path, _model), _operand_1(_operand_1), _operand_2(_operand_2) { }

private:
    LtlToken *_operand_1, *_operand_2;
};


#endif //VERIFIER_OR_TOKEN_H
