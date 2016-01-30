//
// Created by michael on 25/01/16.
//

#ifndef VERIFIER_NOT_TOKEN_H
#define VERIFIER_NOT_TOKEN_H


#include "token.h"

class NotToken : public LtlToken {
public:
    NotToken(std::shared_ptr<LtlToken> _operand) : _operand(_operand) { }
    virtual bool Evaluate(std::shared_ptr<Path> path);

private:
    std::shared_ptr<LtlToken> _operand;

};


#endif //VERIFIER_NOT_TOKEN_H
