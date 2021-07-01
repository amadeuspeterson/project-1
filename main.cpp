#include <iostream>
#include <fstream>
#include "Lexer.h"

using namespace std;

string readFile(const string& file) {
    ifstream input_file(file);
    if (!input_file.is_open()) {
        return "Could not open";
    }
    return string((istreambuf_iterator<char>(input_file)), istreambuf_iterator<char>());
}

int main(int argc, char** argv) {
    Lexer* lexer = new Lexer();

    // TODO
    string fileContents = readFile(argv[1]);
    
    lexer->Run(fileContents);
    lexer->printTokens();

    delete lexer;

    return 0;
}