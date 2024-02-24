#include "Model.h"
//encode the rules of the robber language

Model::Model()
{
    
}

Model::~Model()
{
}

string Model::translateSingleConsonant(char inputCharacter)
{
    //Every consonant is doubled with an o inserted in between
    string consonantWord = "";
    consonantWord += inputCharacter;
    consonantWord += "o";
    consonantWord += inputCharacter;

    return consonantWord;
}

string Model::translateSingleVowel(char inputCharacter)
{
    //Vowels are left intact
    string vowelCharacter = ""; 
    vowelCharacter += inputCharacter;
    return vowelCharacter;
}