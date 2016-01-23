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
    Model(SpecificModel *specific_model, std::vector<std::string> prop_variables);

    // Returns true if the given formula holds for a given world w.
    //TODO: formula should be some sort of parse tree.
    bool Holds(std::string w, std::string formula);

  private:
    // An example is a Kripke model.
    SpecificModel* _specific_model;

    // Propositional variables.
    std::vector<std::string> _prop_variables;
};

#endif
