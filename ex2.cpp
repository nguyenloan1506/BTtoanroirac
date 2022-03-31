#include <iostream>
#include <string.h>

using namespace std;

int ones(string s)
{
    if (s.length() == 0) return 0;
    else {
        if (s[0] == '1') {
            s.erase(s.begin());
            return 1 + ones(s);
        }
        else{
            s.erase(s.begin());
            return ones(s);
        }
    }
}

int main() {
    string s;
    cout << "nhap s: ";
    cin >> s;
    cout << "so bit 1 trong xau la:" << ones(s);
    return 0;
}
