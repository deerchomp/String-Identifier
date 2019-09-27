#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;

int main() {
    string input = "";
    char quit;

    do {
        bool isValid = true;
        bool hasUnderscore = false;
        bool hasDigit = false;
        bool hasAlpha = false;
        cout << "ENTER A STRING: ";
        getline(cin, input);

        if(isdigit(input[0]) | input == "") {
            isValid = false;
        }
        else if (isValid) {
            for (int i = 0; i < input.length(); i++) {
                if (isdigit(input[i])) {
                    hasDigit = true;
                }
                if (input[i] == '_') {
                    hasUnderscore = true;
                }
                if (isalpha(input[i])) {
                    hasAlpha = true;
                }
            }
        }

        if (hasDigit && hasUnderscore && hasAlpha) {
            cout << input << " is an identifier" << endl;
        }
        else {
            cout << input << " is not an identifier" << endl;
        }
        cout << "CONTINUE? y/n ";
        cin >> quit;
        cin.ignore();
        cin.clear();
    } while (quit != 'n');
    return 0;
}