#include <iostream>
#include <vector>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "specific_model.h"
#include <memory>

#ifndef VERIFIER_KRIPKE_MODEL_H
#define VERIFIER_KRIPKE_MODEL_H

class KripkeModel : SpecificModel {
public:
    bool Holds(std::string w, std::string formula);

};

#endif
