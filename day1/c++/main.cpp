#include "extract_string_integer.h"

using std::cout, std::endl, std::ifstream, std::string, std::isdigit;

int main(void) {
    
    string lineFromFile; //not explicit since default constructor is called
    ifstream readFile("../input.txt");
    unsigned int first_number = 0;
    unsigned int last_number = 0;
    unsigned int total = 0;

    //check if file exists, if not terminate program
    if(readFile.fail()) {
        cout << "file error - check location or file permissions" << endl;
        return -1;
    }
    
    // iterates line by line from txt file
    // multiply first digit occurrence by 10 and add last digit occurrence
    // then add to total (i.e. total += 4*10 + 7)
    while (getline (readFile, lineFromFile)) {
        total += firstDigit(lineFromFile, lineFromFile.length()) * 10 + lastDigit(lineFromFile, lineFromFile.length());
    }

    cout << "Total: " << total << endl;

    readFile.close(); // close opened file

    return 0; //successful exit
}