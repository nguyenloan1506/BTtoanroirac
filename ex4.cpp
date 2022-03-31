#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string Reverse(string s,int i, int j){
    if (i>=j){
        return s;
    }
    else {
        swap(s[i],s[j]);
        i++;
        j--;
        return Reverse(s,i,j);
    }
}

int main(){
    string s;
    cout << "nhap xau s: ";
    cin >> s;
    int i = 0;
    int j = s.length()-1;
    cout << "Xau sau khi dao nguoc: " << Reverse(s,i,j);
    return 0;
}
