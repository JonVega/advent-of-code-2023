#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::endl, std::string, std::ifstream;

int main() {
    string textFileString;
    unsigned int gameCounter = 1;
    ifstream textFile("../mini_input.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (textFile, textFileString)) {
        
        textFileString = textFileString.substr(textFileString.find_first_of(":") + 2);
        
        cout << textFileString << endl;

        gameCounter++;
    }

    // Close the file
    textFile.close();

    return 0;
}