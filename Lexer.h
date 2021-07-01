#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include <cctype>
#include <iostream>
#include "Automaton.h"
#include "Token.h"
using namespace std;

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;

    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    Lexer();
    ~Lexer();

    void Run(std::string& input);
    
    // TODO: add other public methods here
    void printTokens();
};

#endif // LEXER_H

