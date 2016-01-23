#include <iostream>
#include <vector>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "parser.h"
#include "specific_model.h"
#include <memory>

#ifndef VERIFIER_KRIPKE_MODEL_H
#define VERIFIER_KRIPKE_MODEL_H

class KripkeModel : SpecificModel {
  public:
    KripkeModel(std::vector<std::string> W,
                std::vector<std::pair<std::string, std::string>> relations,
                std::vector<std::pair<std::string, std::vector<std::string>>> pi);
    bool Holds(std::string w, std::string formula);
  private:
    std::vector<std::string> _W;
    std::vector<std::pair<std::string, std::string>> _relations;
    std::vector<std::pair<std::string, std::vector<std::string>>> _pi;
};

#endif
