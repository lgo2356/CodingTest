#include <iostream>
#include <string>

using namespace std;

bool isUpperCase(char letter) {
    if (letter > 64 && letter < 91) return true;
    return false;
}

bool isLowerCase(char letter) {
    if (letter > 96 && letter < 123) return true;
    return false;
}

bool isSpace(char letter) {
    if (letter == 32) return true;
    return false;
}

bool isNumber(char letter) {
    if (letter > 47 && letter < 58) return true;
    return false;
}

int main()
{
    string str;

    while (getline(cin, str)) {
        int analysisArr[4] = {0,};

        for (int i = 0; i < str.length(); i++) {
            if (isLowerCase(str[i])) analysisArr[0]++;
            if (isUpperCase(str[i])) analysisArr[1]++;
            if (isNumber(str[i])) analysisArr[2]++;
            if (isSpace(str[i])) analysisArr[3]++;
        }

        cout << analysisArr[0] << ' ' << analysisArr[1] << ' ' << analysisArr[2] <<' ' << analysisArr[3] << '\n';
    }

    return 0;
}
