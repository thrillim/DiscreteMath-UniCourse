#include <iostream>
using namespace std;

void Merge(int a1[], int len1, int a2[], int len2)
{
    int a[len1+len2];
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
    for (int i = 0; i < len1+len2; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a1[] = {1,2,34,78,99};
    int a2[] = {2,34,67,88,900};
    int len1 = sizeof(a1)/sizeof(a1[0]);
    int len2 = sizeof(a2)/sizeof(a2[0]);
    Merge(a1,len1,a2,len2);
}