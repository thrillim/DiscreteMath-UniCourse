#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int main()
{
    int num1, num2;
    cout << "Type 2 nongative integers.\nFirst number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    if (num1 > num2)
        swap(num1, num2);
    cout << "Their greatest common divisor: " << gcd(num1, num2) << endl;
    return 0;
}