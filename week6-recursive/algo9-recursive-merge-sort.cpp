#include <iostream>
using namespace std;

void mergeSort(int a[], int len)
{
    if (len > 1)
    {
        int len1 = len/2;
        int len2 = len - len1;
        int a1[len1], a2[len2];
        for (int i = 0; i < len1; i++)
        {
            a1[i] = a[i];
        }
        for (int i = len1; i < len; i++)
        {
            a2[i-len1] = a[i];
        }
        mergeSort(a1,len1);
        mergeSort(a2,len2);
        //merge
        int i = 0, j = 0, k = 0; // run on a1, a2, a
        while (i < len1 && j < len2)
        {
            if (a1[i] <= a2[j])
                a[k++] = a1[i++];
            else
                a[k++] = a2[j++];
        }
        while (i < len1)
            a[k++] = a1[i++];
        while (j < len2)
            a[k++] = a2[j++];
    }
}

int main()
{
    int arr[] = {1,2,6,3,4,19,188,91,78};
    int len = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}