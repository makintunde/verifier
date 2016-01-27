//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_DIAMOND_TOKEN_H
#define VERIFIER_DIAMOND_TOKEN_H


#include "kripke_token.h"

class diamond_token : KripkeToken {
public:
    diamond_token(KripkeToken *_operand, Model *_model) : KripkeToken(_model), _operand(_operand) { }
    bool Evaluate(std::string w);

private:
    KripkeToken *_operand;

};


#endif //VERIFIER_DIAMOND_TOKEN_H
