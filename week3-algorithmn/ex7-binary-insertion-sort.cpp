#include <iostream>
using namespace std;

// void showArr(int a[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int a[] = {7, 4, 3, 8, 1, 5, 4, 2};
    int len = sizeof(a)/sizeof(a[0]);
    // showArr(a,len);
    int countCompare = 0;
    for (int j = 1; j < len; j++)
    {
        int l = 0, r = j - 1;
        while(l < r)
        {
            countCompare++;
            int mid = ( l + r ) / 2;
            if (a[j] > a[mid])
                l = mid + 1;
            else
                r = mid;
            countCompare++;
        }
        countCompare++;
        int location;
        if (a[j] < a[l])
            location = l;
        else
            location = l + 1;
        countCompare++;

        int m = a[j];
        for (int k = 0; k <= j-location-1; k++)
        {
            a[j-k] = a[j-k-1];
            // showArr(a,len);
        }
        a[location] = m;
        // showArr(a,len);
    }
    cout << countCompare;
    return 0;
}