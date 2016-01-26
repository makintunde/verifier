#include "kripke_model.h"
#include "../parser/parser.h"

bool KripkeModel::Holds(std::string w, std::string formula) {
  Parser *parser = new Parser(formula);
  std::vector<std::string> tokens = parser->Parse();
  delete(parser);
  return false;
}

