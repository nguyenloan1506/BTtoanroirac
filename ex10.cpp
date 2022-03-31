#include <iostream>
#include <cmath>
using namespace std;

int ucln (int a, int b) {
	if (a == 0) {
		return b;
	}
	else if (a > b) {
		return ucln(b, a);
	}
	else if (a % 2 == 0 && b % 2 == 0) {
		return 2 * ucln(a / 2, b / 2);
	}
	else if (a % 2 == 0 && b % 2 == 1) {
		return ucln(a / 2, b);
	}
	else {
		return ucln(a, b - a);
	}
}

int main() {
	int m, n;
    cout<<"nhap m: ";
    cin>>m;
    cout<<"nhap n: ";
    cin>>n;
	cout << "ucln=" << ucln(m, n);
	return 0;
}