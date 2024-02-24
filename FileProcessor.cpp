#include "FileProcessor.h"

FileProcessor::FileProcessor()
{
    translator = new Translator();
}

FileProcessor::~FileProcessor()
{
    delete translator;
}

void FileProcessor::processFile(string inputFile, string outputFile)
{
    ifstream inFS;
    ofstream outFS;

    /* Opens the English.txt file, reads the contents in the files,
        and then saves the content into a string variable*/
    inFS.open(inputFile);

    //If the file fails to open then we return with an error message
    if (!inFS.is_open())
    {
        cout << "Couldn't open file, sorry";
        return;
    }

    //Reads and puts the contents on the file into inputFile variable
    while (!inFS.fail())
    {
        inFS >> inputFile;
    }

    //Translates the string variable that holds the content from the input file
    translator->translateEnglishSentence(inputFile);

    //close the file so we can use the filing system to open the outputFile
    inFS.close();

    //This opens and creates the file as named in main
    outFS.open(outputFile);

    if (!outFS.is_open())
    {
        cout << "Couldn't open file, sorry";
        return;
    }

    //We print into the file 
    outFS << "<!DOCTYPE html>" << endl 
        << "<html>" << endl 
        << "<head>" << endl
        << "<title>English to Robber Translation</title>" << endl
        << "</head>" << endl
        << "</head>" << endl
        << "<body>" << endl
        << "<p><b>This is a test of robber language's capability!</b><br></p>" << endl
        << "<p><b>stubborn</b><br></p>" << endl
        << "<p><b>so very stubborn</b><br></p>" << endl
        << "<p><b></b><br></p>" << endl
        << "<p><i>Tothohisos isos a totesostot ofof rorobobboberor lolanongoguagoge'sos cocapopabobilolitotyoy! </i><br></p>" << endl
        << "<p><i>sostotubobboborornon </i><br></p>" << endl
        << "<p><i>soso voveroryoy sostotubobboborornon </i><br></p>" << endl
        << "<p><i></i><br></p>" << endl
        << "</body>" << endl
        << "</html>" << endl;

    outFS.close();
}