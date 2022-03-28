#include <iostream>
#include <string>
using namespace std;

int ones (string s, int len)
{
    //-----------------Wrong way-----------------
    // if (len == 0)
    //     return 0;
    // else
    //     return (s[len-1] - 48 + ones(s, len - 1)); //0=48 1=49 ASCII
    // Kết quả ra 5 vì lúc quay lại len chỉ bằng 1 giá trị ban đầu????
    //-------------------------------------------
    if (len == 0)
        return 0;
    if (s[len-1] == 1)
        return 1 + ones(s, len-1);
    else
        return ones(s, len-1);
}

int main()
{
    int count_by_loop = 0;
    string s = "00111";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 1)
            count_by_loop++;
    }
    int count_by_recursion = ones(s,len);
    if (count_by_loop == count_by_recursion)
        cout << "Bingo" << endl;
    else
        cout << "Something went wrong" << endl;
    return 0;
}

