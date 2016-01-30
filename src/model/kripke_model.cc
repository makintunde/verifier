#include "kripke_model.h"
#include "../parser/parser.h"

bool KripkeModel::Holds(std::string w, std::string formula) {
  std::unique_ptr<Parser> parser(new Parser(formula));
  std::vector<std::string> tokens = parser->Parse();
  return false;
}

