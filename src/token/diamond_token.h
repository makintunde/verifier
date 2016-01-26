//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_DIAMOND_TOKEN_H
#define VERIFIER_DIAMOND_TOKEN_H


#include "token.h"

class diamond_token : Token {
public:
    diamond_token(Token *_operand, Model *_model) : Token(_model), _operand(_operand) { }
    bool Evaluate(std::string w);

private:
    Token *_operand;

};


#endif //VERIFIER_DIAMOND_TOKEN_H
