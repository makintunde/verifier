//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_BOX_TOKEN_H
#define VERIFIER_BOX_TOKEN_H


#include "kripke_token.h"

class BoxToken : KripkeToken {
public:
    BoxToken(Model *_model, KripkeToken *_operand) : KripkeToken(_model), _operand(_operand) {}
    bool Evaluate(std::string w);

private:
    KripkeToken *_operand;

};


#endif //VERIFIER_BOX_TOKEN_H
