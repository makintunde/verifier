//
// Created by michael on 26/01/16.
//

#ifndef VERIFIER_AND_TOKEN_H
#define VERIFIER_AND_TOKEN_H


#include "kripke_token.h"

class AndToken : public KripkeToken {
public:
    AndToken(std::shared_ptr<KripkeToken> _l_operand,
             std::shared_ptr<KripkeToken> _r_operand) :
            _operand_1(_l_operand), _operand_2(_r_operand) { }
    virtual bool Evaluate(std::string w);
private:
    std::shared_ptr<KripkeToken> _operand_1, _operand_2;

};


#endif //VERIFIER_AND_TOKEN_H
