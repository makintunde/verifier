//
// Created by michael on 24/01/16.
//

#ifndef VERIFIER_BOX_TOKEN_H
#define VERIFIER_BOX_TOKEN_H


#include "token.h"

class BoxToken : Token {
  public:
    BoxToken(Model *_model, Token *_operand) : Token(_model), _operand(_operand) {}
    bool Evaluate(std::string w);
  private:
    Token *_operand;

};


#endif //VERIFIER_BOX_TOKEN_H
