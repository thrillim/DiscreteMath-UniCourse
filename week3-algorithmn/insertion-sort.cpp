#include <iostream>
using namespace std;

void showArr(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {7, 4, 3, 8, 1, 5, 4, 2};
    int len = sizeof(a)/sizeof(a[0]);
    showArr(a,len);
    for (int j = 1; j < len; j++)
    {
        int i = 0;
        while (a[j] > a[i])
            i++;
        int m = a[j];
        for (int k = 0; k <= j-i-1; k++)
        {
            a[j-k] = a[j-k-1];
            showArr(a,len);
        }
        a[i] = m;
        showArr(a,len);
    }
    return 0;
}