//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_DIAMOND_TOKEN_H
#define VERIFIER_DIAMOND_TOKEN_H


#include "kripke_token.h"

class DiamondToken : public KripkeToken {
public:
    DiamondToken(std::shared_ptr<KripkeToken> _operand,
                 std::shared_ptr<Model> _model) :
            KripkeToken(_model), _operand(_operand) { }
    virtual bool Evaluate(std::string w);

private:
    std::shared_ptr<KripkeToken> _operand;

};


#endif //VERIFIER_DIAMOND_TOKEN_H
