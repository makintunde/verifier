//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_AND_TOKEN_H
#define VERIFIER_AND_TOKEN_H


#include "token.h"

class AndToken : public LtlToken {
public:
    AndToken(Path *_path, Model _model, Token *_l_operand, Token *_r_operand) :
            LtlToken(_path, _model),
            _l_operand(_l_operand),
            _r_operand(_r_operand) { }
    virtual bool Evaluate(std::shared_ptr<Path> path);
private:
    LtlToken *_l_operand, *_r_operand;

};


#endif //VERIFIER_AND_TOKEN_H
