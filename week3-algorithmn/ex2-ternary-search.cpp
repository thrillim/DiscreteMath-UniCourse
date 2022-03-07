#include <iostream>
using namespace std;

int ternaySeach(int x, int a[], int len) //khó khi tìm kích thước của arr khi đưa vào như tham số => thêm tham số len
{
    int l = 0;
    int r = len-1;
    while (r >= l) 
    {
 
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        if (a[mid1] == x) 
            return mid1 + 1; // +1 vì code theo index-0
        if (a[mid2] == x) 
            return mid2 + 1;

        if (x < a[mid1]) 
            r = mid1 - 1; 
        else if (x < a[mid2]) 
        {
            l = mid1 + 1;
            r = mid2 - 1;
        }
        else 
            l = mid2 + 1;
    }
 
    return -1;
}

int main()
{
    int a[]={1, 2, 3,5,6,7,8,10,12,13,15,16,18,19,20,22};
    int x=19;
    // cout << "Find: ";
    // cin >> x;
    int len = sizeof(a)/sizeof(a[0]);
    cout << ternaySeach(x,a,len) << endl;
    return 0;
}



// Recursion
// int ternaySeach(int x, int l, int r, int a[])
// {
//     if (r >= l) 
//     {
 
//         int mid1 = l + (r - l) / 3;
//         int mid2 = r - (r - l) / 3;
 
//         if (a[mid1] == x) 
//             return mid1 + 1; // +1 vì code theo index-0
//         if (a[mid2] == x) 
//             return mid2 + 1;

//         if (x < a[mid1]) 
//             return ternaySeach(x, l, mid1 - 1, a);
//         else if (x < a[mid2]) 
//             return ternaySeach(x, mid1 + 1, mid2-1, a);
//         else 
//             return ternaySeach(x, mid2 + 1, r, a);
//     }
 
//     return -1;
// }

// int main()
// {
//     int a[] = {1,2,3,4,5,6,7,8,9,10};
//     int l = 0;
//     int r = 9;
//     int x;
//     cout << "Find: ";
//     cin >> x;
//     cout << "Position: " << ternaySeach(x,l,r,a) << endl;
//     return 0;
// }
