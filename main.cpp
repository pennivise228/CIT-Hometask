#include<iostream>
using namespace std;

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return f(n - 1) + f(n - 2);
	int x0 = 0;
	int x1 = 1;
	cout << x0 << endl;
	if (n >= 1) cout << x1 << endl;
	for (int i = 2; i <= n; i++) {
		if (x0 < x1) {
			x0 += x1;
			cout << x0 << endl;
		}
		else {
			x1 += x0;
			cout << x1 << endl;
		}
	}
}

int main() {
	int n;
	cin >> n;
	cout << fib(n);
}