//
// Created by michael on 29/01/16.
//

#include "weak_until_token.h"
#include "or_token.h"
#include "box_token.h"
#include "until_token.h"

bool WeakUntilToken::Evaluate(Path *path) {
    BoxToken *box_token = new BoxToken(path, _model);
    UntilToken *until_token = new UntilToken(path, _model, _operand_1, _operand_2);
    OrToken *or_token = new OrToken(path, _model, until_token, box_token);
    return or_token->Evaluate(path);
}
