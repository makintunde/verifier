#include "specific_model.h"
#include "model.h"

Model::Model(SpecificModel *specific_model) : _specific_model(specific_model) {}

bool Model::Holds(std::string w, std::string formula) {
    return _specific_model->Holds(w, formula);
}
