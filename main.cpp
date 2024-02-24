#include "FileProcessor.h"


int main(int argc, char **argv){
    //Using a try catch statement in case anything goes wrong 
    try{
        string inputFile = "English.txt";
        string outputFile = "PigLatin.html";
        FileProcessor *fileProcessor = new FileProcessor();

        fileProcessor->processFile(inputFile, outputFile);

        delete fileProcessor;
    } catch (runtime_error &exception){
        cerr << exception.what() << endl;
    }
    return 0;
}