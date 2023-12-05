#include <string>
#include <vector> //to hold numeric words as strings
#include <algorithm> //to use 'find'
#include "extract_string_integer.h"

using std::vector, std::find, std::begin, std::end;

const vector<string> str_list {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

unsigned int firstDigit(string &str, int string_length) {
    string::iterator it;
    string numeric_value;
    
    //first pass (front to back)
    for(it = str.begin(); it != str.end(); it++) {
        numeric_value += *it; //begins making string to check for numeric words
        
        if(isdigit(*it)) { //if char is a digit, return before checking word
            return *it - '0'; //since it's ASCII, subtract by char '0'
        }
        
        //keeps track of index count in 'for' loop to return word value
        for(int index = 0; index < str_list.size(); index++) {
            
            //looks for numeric word in temp string from vector of known words
            if(numeric_value.find(str_list.at(index)) != string::npos) {
                return index + 1; //once found, return the correct numeric value
            }
        } 
    } //end of string iteration
    return 0; //unable to find digit
}

unsigned int lastDigit(string &str, int string_length) {
    string::reverse_iterator rev_it;
    string numeric_value;

    //last pass (back to front)
    for(rev_it = str.rbegin(); rev_it != str.rend(); rev_it++) {
        //prepends char to check first numeric word occurrence
        numeric_value = *rev_it + numeric_value;
        
        if(isdigit(*rev_it)) {
            return *rev_it - '0'; //since it's ASCII, subtract by char '0'
        }
        
        for(int index = 0; index < str_list.size(); index++) {
            
            if(numeric_value.find(str_list.at(index)) != string::npos) {
                return index + 1;
            }
        }
    }
    return 0; //unable to find digit
}