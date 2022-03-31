#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

vector<string> find(int n) {
    if (n % 2 == 1) n--;
    vector<string> a;
    if (n < 2) return a;
    else if (n == 2) {
        a.push_back("()");
        return a;
    }
    else {
        for (int i = 0; i< find(n-2).size(); i++) {
            a.push_back("(" + find(n-2)[i] + ")");
            if ("()" + find(n-2)[i] != find(n-2)[i] + "()") {
                a.push_back("()" + find(n-2)[i]);
                a.push_back(find(n-2)[i] + "()");
            }
            else {
                a.push_back("()" + find(n-2)[i]);
            }
        }
    }
    return a;
}

int main() {
    int n;
    cout<<"nhap n:";
    cin >> n;
    for (int i=2; i<=n; i+=2) {
        for (int j= 0; j<find(i).size(); j++) {
            cout<<find(i)[j]<<endl;
        }
    }
    return 0;
}