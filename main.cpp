#include <iostream> 
using namespace std;


int fib(int i)
{
    int f1 = 0;
    int f2 = 1;
    int fn;
    if (i < 1) { return 0; }
    if (i == 1) { cout << "0 1\n"; }
    if (i > 1)
    {
        cout << "0 1 ";
        for (int j = 1; j < i; j++)
        {
            fn = f1 + f2;
            cout << fn << " ";
            f1 = f2;
            f2 = fn;
        }
    }
};

int main()
{
    cout << "Hello world";
    int n;
    cout << "Enter a number n = "; cin >> n;
    cout << fib(n) << " ";
    cout << endl;
}