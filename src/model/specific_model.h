//
// Created by michael on 23/01/16.
//

#include <string>
#ifndef VERIFIER_SPECIFICMODEL_H
#define VERIFIER_SPECIFICMODEL_H


class SpecificModel {
  public:
    virtual bool Holds(std::string w, std::string formula) = 0;

};


#endif //VERIFIER_SPECIFICMODEL_H
