//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_NOT_TOKEN_H
#define VERIFIER_NOT_TOKEN_H


#include "kripke_token.h"

class not_token : KripkeToken {
public:
    not_token(KripkeToken *_operand) : _operand(_operand) { }
    bool Evaluate(std::string w);

private:
    KripkeToken *_operand;

};


#endif //VERIFIER_NOT_TOKEN_H
