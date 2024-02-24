#ifndef MODEL_H
#define MODEL_H

#include <iostream>
using namespace std;

class Model
{
private:

public:
    string translateSingleConsonant(char inputCharacter);
    string translateSingleVowel(char inputCharacter);
    Model();
    ~Model();
};
#endif
