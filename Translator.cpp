#include "Model.h"
#include "Translator.h"
//translate english sentences to Rövarspråket

Translator::Translator(){
    model = new Model(); //thank you Rene from OH
}

Translator::~Translator(){
    //have to delete to open up that memory 
    delete model;
}

string Translator::translateEnglishSentence(string sentence){
    //combine the words from below method
    //use append() to bring strings together

    sentence.append(translateEnglishWord(sentence));

    return sentence;
}

string Translator::translateEnglishWord(string word){
    /*calls upon to see if word has consonants
        if it does then call the model class to implement the rules
        into the word.*/
    string pigLatinWord="";
    for (int i = 0; i < word.size(); ++i)
    {
        if (ispunct(word[i])) //checks if there is punctuation
        {
            pigLatinWord += word[i];
        }
        else if (IfWordHasConsonants(word[i]))
        { /*if the word does come back true for consonants then we call on the model
            translateSingleConsonant method to then implement the rules and to add
            to the new translated version of the string */
            pigLatinWord += model->translateSingleConsonant(word[i]);
        }
        else 
        {
            pigLatinWord += word[i];
        }
    }
    return pigLatinWord; 
}

bool Translator::IfWordHasConsonants(char c){
    /*iterates through the string to find if there is a vowel
    If the i letter in the word doesn't contain a vowel then it will 
    return true meaning there is a consonant.*/
    switch (toupper(c))
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case ' ':
            return false;

        default:
            return true;
    }

}

