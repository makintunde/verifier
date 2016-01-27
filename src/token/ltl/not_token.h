//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_NOT_TOKEN_H
#define VERIFIER_NOT_TOKEN_H


#include "token.h"

class NotToken : Token {
public:
    NotToken(LtlToken *_operand) : _operand(_operand) { }
    bool Evaluate();

private:
    LtlToken *_operand;

};


#endif //VERIFIER_NOT_TOKEN_H
