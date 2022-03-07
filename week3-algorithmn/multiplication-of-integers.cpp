#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> binaryExpansion(int a)
{
    int temp = a;
    int k = 0;
    vector<int> binOut;
    while (temp > 0)
    {
        binOut.insert(binOut.begin(),temp % 2);
        temp /= 2;
        k++;
    }
    return binOut;
}

int main()
{
    int num1 = 5;
    int num2 = 0;
    int product = 0;

    vector<int> changeNum = binaryExpansion(num2);

    for(int j = changeNum.size() - 1; j >= 0; j--)
    {
        if (changeNum[j] == 1)
        {
            int c = num1 << (changeNum.size() - 1 - j);
            product += c;
        }
    }

    cout << product;
    return 0;
}