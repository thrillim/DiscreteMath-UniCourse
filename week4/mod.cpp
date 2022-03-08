#include <iostream>
using namespace std;

int main()
{
    int m = 2268;
    int mod = 2537;
    int n=1;
    for (int i = 0; i < 937; i++)
    {
        n = n * m % mod;
    }
    cout << n;
    return 0;
}