/*
 • E3.17
 Write a program that prompts the user to provide a single character from the alphabet. Print Vowel or Consonant, depending on the user input. If the user input is not a letter (between a and z or A and Z), or is a string of length > 1, print an error message.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter a single character: ";
    string letter;
    cin >> letter;
    
    if (letter.length() > 1)
    {
        cout << "*error* just one character";
    }
    else if (letter == "a" || letter == "A" || letter == "e" || letter == "E" || letter == "i" || letter == "I" || letter == "o" || letter == "O" || letter == "u" || letter == "U")
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
    cout << endl;
}
