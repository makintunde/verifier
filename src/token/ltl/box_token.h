//
// Created by michael on 27/01/16.
//

#ifndef VERIFIER_BOX_TOKEN_H
#define VERIFIER_BOX_TOKEN_H


#include "ltl_token.h"

/**
 *  The modal box [ ] is written as G representing "forever in
 *   the future".
 */
class BoxToken : public LtlToken {

public:
    virtual bool Evaluate(Path *path);

    BoxToken(Path *_path, Model *_model) : LtlToken(_path, _model) { }

private:
    LtlToken *_operand;
};


#endif //VERIFIER_BOX_TOKEN_H
