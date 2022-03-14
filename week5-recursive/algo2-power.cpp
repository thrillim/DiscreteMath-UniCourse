#include <iostream>
using namespace std;

long long power (int a, int n)
{
    if (n == 0)
        return 1;
    else
        return a * power(a, n-1);
}

int main()
{
    int a, n;
    cout << "A nonzero real number a: ";
    cin >> a;
    cout << "A nonnegative integer n: ";
    cin >> n;
    cout << "a^n = " << power(a,n) << endl;
    return 0;
}