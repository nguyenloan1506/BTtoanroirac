#include <iostream>
#include <string.h>

using namespace std;

char s1;

char m(string s){
    if (s.length()==0) return s1;
    else {
        if (s[0] > s1) {
            s.erase(s.begin());
            return m(s);
        }
        else {
            s1 = s[0];
            s.erase(s.begin());
            return m(s);
        }
    }
}

int main() {
    string s;
    cout << "nhap xau s: ";
    cin >> s;
    s1 = s[0];
    cout << "Chu so nho nhat trong xau s: " << m(s);
    return 0;
}
