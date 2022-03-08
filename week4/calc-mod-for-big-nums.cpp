#include <iostream>
using namespace std;

int main()
{
    int base;
    int expo;
    int mod;
    int result = 1;
    cout << "result = base ^ expo (mod n)\n";
    cout << "base = ";
    cin >> base;
    cout << "expo = ";
    cin >> expo;
    cout << "n = ";
    cin >> mod;
    for (int i = 0; i < expo; i++) 
    {
        result = result * base % mod;
    }
    cout << "result = " << base << " ^ " << expo << " (mod " << mod << ") = " << result << endl;
    return 0;
}