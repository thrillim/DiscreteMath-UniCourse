#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a > b)
        return GCD(b,a);
    if (a == 0)
        return b;
    if (a % 2 == 0)
    {
        if (b % 2 == 0)
            return 2 * GCD(a/2, b/2);
        else
            return GCD(a/2, b);
    }
    else
    {
        return GCD(a, b-a);
    }
}

int main()
{
    int num1, num2;
    cout << "Input 2 nonnegative integer:" << endl;
    cin >> num1 >> num2;
    cout << "Their greatest common divisor: " << GCD(num1, num2) << endl;
    return 0;
}
