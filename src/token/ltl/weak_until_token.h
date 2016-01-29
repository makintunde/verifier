//
// Created by michael on 29/01/16.
//

#ifndef VERIFIER_WEAK_UNTIL_TOKEN_H
#define VERIFIER_WEAK_UNTIL_TOKEN_H


#include "ltl_token.h"

class WeakUntilToken : public LtlToken {

public:
    virtual bool Evaluate(Path *path);

    WeakUntilToken(Path *_path, Model *_model, LtlToken *_operand_1, LtlToken *_operand_2) :
            LtlToken(_path, _model), _operand_1(_operand_1), _operand_2(_operand_2) { }

private:
    LtlToken *_operand_1, *_operand_2;
};


#endif //VERIFIER_WEAK_UNTIL_TOKEN_H
