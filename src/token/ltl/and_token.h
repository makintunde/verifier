//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_AND_TOKEN_H
#define VERIFIER_AND_TOKEN_H


#include "token.h"

class AndToken : public LtlToken {
public:
    AndToken(std::shared_ptr<Path> _path, Model _model,
             std::shared_ptr<Token> _l_operand,
             std::shared_ptr<Token> _r_operand) :
            LtlToken(_path, _model),
            _l_operand(_l_operand),
            _r_operand(_r_operand) { }
    virtual bool Evaluate(std::shared_ptr<Path> path);
private:
    std::shared_ptr<LtlToken> _l_operand, _r_operand;

};


#endif //VERIFIER_AND_TOKEN_H
