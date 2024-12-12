#include <iostream>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; ++i) {
        char ch = hexString[i];
        int n;
        if (ch>='0'&&ch<='9') {
            n = ch - '0';
        }
        else if (ch >= 'a' && ch <= 'f') {
           n = ch - 'a' + 10;
        }
        else if (ch >= 'A' && ch <= 'F') {
           n = ch - 'A' + 10;
        }
        else {
            return 0;
        }
        result = result * 16 + n;
    }
    return result;
}

int main() {
     char c[100];
     cin >> c;
    int t= parseHex(c);
    cout << t<< endl;
    return 0;
}