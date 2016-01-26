//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_NOT_TOKEN_H
#define VERIFIER_NOT_TOKEN_H


#include "token.h"

class not_token : Token {
public:
    not_token(Token *_operand) : _operand(_operand) { }
    bool Evaluate(std::string w);

private:
    Token *_operand;

};


#endif //VERIFIER_NOT_TOKEN_H
