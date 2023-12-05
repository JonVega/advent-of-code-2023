#pragma once

#include <iostream>

using std::string;

/* FUNCTION DECLARATIONS */

//returns first digit or numeric word occurrence from the front (left to right)
unsigned int firstDigit(string &str, int string_length);

//returns first digit or numeric word occurrence from the back (right to left)
unsigned int lastDigit(string &str, int string_length);

