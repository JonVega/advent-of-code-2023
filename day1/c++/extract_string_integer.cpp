#include "extract_string_integer.h"

unsigned int firstDigit(string &str, int string_length) {
    string::iterator it;

    //first pass (front to back)
    for(it = str.begin(); it != str.end(); it++) {
        if(isdigit(*it)) {
            return *it - '0'; //since it's ASCII, subtract by char '0'
        }
    }
    return 0;
}

unsigned int lastDigit(string &str, int string_length) {
    string::reverse_iterator rev_it;

    //last pass (back to front)
    for(rev_it = str.rbegin(); rev_it != str.rend(); rev_it++) {
        if(isdigit(*rev_it)) {
            return *rev_it - '0'; //since it's ASCII, subtract by char '0'
        }
    }
    return 0;
}