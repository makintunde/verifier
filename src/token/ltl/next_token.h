//
// Created by michael on 27/01/16.
//

#ifndef VERIFIER_NEXT_TOKEN_H
#define VERIFIER_NEXT_TOKEN_H


#include "ltl_token.h"

class NextToken : public LtlToken {

public:
    virtual bool Evaluate(std::shared_ptr<Path> path);

    NextToken(std::shared_ptr<Path> _path, std::shared_ptr<Model> _model,
              std::shared_ptr<LtlToken> _operand)
            : LtlToken(_path, _model), _operand(_operand) { }

private:
    std::shared_ptr<LtlToken> _operand;
};


#endif //VERIFIER_NEXT_TOKEN_H
