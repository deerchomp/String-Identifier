#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;

int main() {
    string input = "";
    bool isValid = false;
    char quit;

    do {
        cin.ignore();
        cout << "ENTER A STRING: ";
        getline(cin, input);
        cout << "You typed: " << input << endl;
        cout << "CONTINUE? y/n ";
        cin >> quit;
    } while (quit != 'n');
    return 0;
}