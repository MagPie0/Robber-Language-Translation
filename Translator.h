#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <iostream>
#include "Model.h"
using namespace std;

class Translator
{
private:
    bool IfWordHasConsonants(char c);
    Model *model; 
public:
    string translateEnglishWord(string word);
    string translateEnglishSentence(string sentence);
    Translator();
    ~Translator();
};
#endif