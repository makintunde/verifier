//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_NOT_TOKEN_H
#define VERIFIER_NOT_TOKEN_H


#include "kripke_token.h"

class NotToken : public KripkeToken {
public:
    NotToken(std::shared_ptr<KripkeToken> _operand) : _operand(_operand) { }
    virtual bool Evaluate(std::string w);

private:
    std::shared_ptr<KripkeToken> _operand;

};


#endif //VERIFIER_NOT_TOKEN_H
