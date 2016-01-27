//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_AND_TOKEN_H
#define VERIFIER_AND_TOKEN_H


#include "token.h"

class and_token : LtlToken {
public:
    and_token(Path *_path, Model _model, Token *_l_operand, Token *_r_operand) :
            LtlToken(_path, _model), _l_operand(_l_operand), _r_operand(_r_operand) { }
    bool Evaluate();
private:
    LtlToken *_l_operand, *_r_operand;

};


#endif //VERIFIER_AND_TOKEN_H
