#include <iostream>
using namespace std;

int mpower(int b, int n, int m)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return (mpower(b,n/2,m))*(mpower(b,n/2,m)) % m;
    else
        return ((mpower(b,n/2,m)*(mpower(b,n/2,m))) % m) * (b % m) % m; 
}

int main()
{
    int b, n, m; //base, expo, modul
    cout << "A positive base b: ";
    cin >> b;
    cout << "A nonnegative exponent n: ";
    cin >> n;
    cout << "A greater than 1 integer as modular m: ";
    cin >> m;
    cout << "b^n mod m = " << mpower(b,n,m) << endl;
    return 0;
}