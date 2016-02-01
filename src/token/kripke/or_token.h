//
// Created by michael on 29/01/16.
//

#ifndef VERIFIER_OR_TOKEN_H
#define VERIFIER_OR_TOKEN_H


#include "kripke_token.h"

class OrToken : public KripkeToken {

public:
    OrToken(std::shared_ptr<KripkeToken> _operand_1,
            std::shared_ptr<KripkeToken> _operand_2)
            : _operand_1(_operand_1), _operand_2(_operand_2) { }

    virtual bool Evaluate(std::string w);

private:
    std::shared_ptr<KripkeToken> _operand_1, _operand_2;
};


#endif //VERIFIER_OR_TOKEN_H
