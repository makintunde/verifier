//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_TRUE_TOKEN_H
#define VERIFIER_TRUE_TOKEN_H

#include <string>
#include "kripke_token.h"

class TrueToken : public KripkeToken {
public:
    virtual bool Evaluate(std::string w);

};


#endif //VERIFIER_TRUE_TOKEN_H
