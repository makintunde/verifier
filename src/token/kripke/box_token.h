//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_BOX_TOKEN_H
#define VERIFIER_BOX_TOKEN_H


#include "kripke_token.h"

class BoxToken : public KripkeToken {
public:
    BoxToken(std::shared_ptr<Model> _model,
             std::shared_ptr<KripkeToken> _operand) :
            KripkeToken(_model), _operand(_operand) {}
    virtual bool Evaluate(std::string w);

private:
    std::shared_ptr<KripkeToken> _operand;

};


#endif //VERIFIER_BOX_TOKEN_H
