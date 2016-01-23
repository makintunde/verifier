//
// Created by michael on 23/01/16.
//

#include <iostream>
#include <vector>
#include "kripke_model.h"
#include "model.h"

int main() {
    int amount = 0;
    std::vector<std::string> prop_variables;
    std::vector<std::string> w;
    std::vector<std::pair<std::string, std::string>> relations;
    std::vector<std::pair<std::string, std::vector<std::string>>> pi;
    std::string next;
    std::cout << "How many propositional variables?" << std::endl;
    std::cin >> amount;
    std::cout << "Define propositional variables:" << std::endl;
    for(size_t i = 0; i < amount; ++i) {
        std::cin >> next;
        prop_variables.push_back(next);
    }
    std::cout << "How many possible worlds?" << std::endl;
    std::cin >> amount;
    std::cout << "Define the worlds w_i:" << std::endl;
    for(size_t i = 0; i < amount; ++i) {
        std::cin >> next;
        w.push_back(next);
    }
    std::cout << "How many relations on W?" << std::endl;
    std::cin >> amount;
    std::cout << "Define the relations:" << std::endl;
    for(size_t i = 0; i < amount; ++i) {
        std::string w1, w2;
        std::cin >> w1;
        std::cin >> w2;
        relations.push_back(std::make_pair(w1, w2));
    }

    for (size_t i = 0; i < prop_variables.size(); ++i) {
        std::cout << "How many valuations for " << prop_variables[i] << "?" << std::endl;
        std::cin >> amount;
        std::cout << "Define the valuations for " << prop_variables[i] << ": " << std::endl;
        std::vector<std::string> next_vec;
        for (size_t j = 0; j < amount; ++j) {
            std::string next_str;
            std::cin >> next_str;
            next_vec.push_back(next_str);
        }
        pi.push_back(std::make_pair(prop_variables[i], next_vec));
    }

    SpecificModel *specific_model = (SpecificModel *) new KripkeModel(w, relations, pi);
    Model *model = new Model(specific_model, prop_variables);
    std::string w_new;
    std::string formula;
    std::cout << "Enter the specific world:" << std::endl;
    std::cin >> w_new;
    std::cout << "Enter the formula to verify:" << std::endl;
    std::cin >> formula;
    std::cout << (model->Holds(w_new, formula) ? "TRUE" : "FALSE") << std::endl;
}
