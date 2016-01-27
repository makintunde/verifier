//
// Created by michael on 27/01/16.
//

#ifndef VERIFIER_NEXT_TOKEN_H
#define VERIFIER_NEXT_TOKEN_H


#include "ltl_token.h"

class NextToken : public LtlToken {

public:
    virtual bool Evaluate(Path *path);

    NextToken(Path *_path, Model *_model, LtlToken *_operand) : LtlToken(_path, _model), _operand(_operand) { }

private:
    LtlToken *_operand;
};


#endif //VERIFIER_NEXT_TOKEN_H
