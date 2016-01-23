#include "specific_model.h"
#include "model.h"

Model::Model(SpecificModel *specific_model, std::vector<std::string> prop_variables) :
        _specific_model(specific_model),
        _prop_variables(prop_variables) {}

bool Model::Holds(std::string w, std::string formula) {
    return _specific_model->Holds(w, formula);
}
