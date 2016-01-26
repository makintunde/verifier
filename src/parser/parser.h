//
// Created by michael on 23/01/16.
//

#ifndef VERIFIER_PARSER_H
#define VERIFIER_PARSER_H

#include <string>
#include <vector>

class Parser {
public:
    Parser(std::string to_parse);
    std::vector<std::string> Parse();

private:
    std::string _to_parse;
};


#endif //VERIFIER_PARSER_H
