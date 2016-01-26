#include "specific_model.h"
#include "model.h"

Model::Model(SpecificModel *specific_model, std::vector<std::string> prop_variables, std::vector<std::string> _W,
             std::vector<std::pair<std::string, std::string>> _relations,
             std::vector<std::pair<std::string, std::vector<std::string>>> _pi) :
        _specific_model(specific_model),
        _prop_variables(prop_variables), _W(_W), _relations(_relations), _pi(_pi) {}

bool Model::Holds(std::string w, std::string formula) {
    return _specific_model->Holds(w, formula);
}
