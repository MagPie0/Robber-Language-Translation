#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include "Translator.h"
#include "Model.h"
using namespace std;

class FileProcessor
{
private:
    Translator *translator;
public:
    void processFile(string inputFile, string outputFile);
    FileProcessor();
    ~FileProcessor();
};


#endif