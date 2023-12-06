#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::endl, std::string, std::ifstream;

int main() {
    string textFileString;
    
    ifstream textFile("../mini_input.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (textFile, textFileString)) {
        cout << textFileString << endl;
    }

    // Close the file
    textFile.close();

    return 0;
}