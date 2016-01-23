#include <iostream>
#include <vector>
#include <utility>
#include <unordered_set>
#include <string>
#include "specific_model.h"

#ifndef VERIFIER_MODEL_H
#define VERIFIER_MODEL_H

class Model {
  public:
    Model(SpecificModel *specific_model);

    bool Holds(std::string w, std::string formula);
  private:
    SpecificModel* _specific_model;
};

#endif