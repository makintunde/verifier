#include "kripke_model.h"

bool KripkeModel::Holds(std::string w, std::string formula) {
  Parser *parser = new Parser(formula);
  std::vector<std::string> tokens = parser->Parse();
  delete(parser);
  return false;
}

KripkeModel::KripkeModel(std::vector<std::string> W, std::vector<std::pair<std::string, std::string>> relations,
                         std::vector<std::pair<std::string, std::vector<std::string>>> pi) :
  _W(W), _relations(relations), _pi(pi) {}
