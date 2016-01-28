//
// Created by michael on 28/01/16.
//

#ifndef VERIFIER_UNTIL_TOKEN_H
#define VERIFIER_UNTIL_TOKEN_H


#include "ltl_token.h"

class UntilToken : public LtlToken {

public:
    virtual bool Evaluate(Path *path);

    UntilToken(Path *_path, Model *_model, LtlToken *_operand_1, LtlToken *_operand_2) :
            LtlToken(_path, _model), _operand_1(_operand_1), _operand_2(_operand_2) { }

private:
    LtlToken *_operand_1, *_operand_2;

};


#endif //VERIFIER_UNTIL_TOKEN_H
