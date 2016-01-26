#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "specific_model.h"

#ifndef VERIFIER_MODEL_H
#define VERIFIER_MODEL_H

class Model {
public:
    Model(SpecificModel *specific_model, std::vector<std::string> prop_variables, std::vector<std::string> _W,
          std::vector<std::pair<std::string, std::string>> _relations,
          std::vector<std::pair<std::string, std::vector<std::string>>> _pi);

    // Returns true if the given formula holds for a given world w.
    //TODO: formula should be some sort of AST.
    bool Holds(std::string w, std::string formula);

    const std::vector<std::string> &get_W() const {
        return _W;
    }

    const std::vector<std::pair<std::string, std::string>> &get_relations() const {
        return _relations;
    }

    const std::vector<std::pair<std::string, std::vector<std::string>>> &get_pi() const {
        return _pi;
    }

private:
    std::vector<std::string> _W;
    std::vector<std::pair<std::string, std::string>> _relations;
    std::vector<std::pair<std::string, std::vector<std::string>>> _pi;
    // An example is a Kripke model.
    SpecificModel *_specific_model;

    // Propositional variables.
    std::vector<std::string> _prop_variables;
};
#endif
