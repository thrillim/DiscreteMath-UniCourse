#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> CONCAT(vector<string> a1, vector<string> a2)
{
    vector<string> out;
    for (int i = 0; i < a1.size(); i++)
    {
        out.push_back(a1[i]);
    }
    for (int i = 0; i < a2.size(); i++)
    {
        out.push_back(a1[i]);
    }
    return out;
}

void parentheses(int n, vector<string> &output)
{
    vector<string> X1, Y1, X2, Y2, X2Y2;
    if (n % 2 == 1)
    {
        parentheses(n-1, X1);
        parentheses(n-1, Y1);
    }
    else if (n == 0)
    {
        Y1.push_back("");
    }
    else
    {
        parentheses(n-2, X2);
        parentheses(n-2, Y2);

        X2Y2 = CONCAT(X2, Y2);
        
        vector<string> temp1, temp2;

        for (int i = 0; i < X2Y2.size(); i++)
        {
            if (X2Y2[i].length() == n - 2)
            {
                temp1.push_back("("+X2Y2[i]+")");
            }
        }

        Y1 = CONCAT(Y2, temp1);

        for (int i = 0; i < Y2.size(); i++)
        {
            for (int j = 0; j < X2Y2.size(); j++)
            {
                if (Y2[i].length() + X2Y2[j].length() == n)
                {
                    temp2.push_back(Y2[i] + X2Y2[j]);
                }
            }
        }

        X1 = CONCAT(X2, temp2);

    }
    output = CONCAT(X1, Y1);
}

int main()
{
    // int n;
    // cout << "Input the number of character (nonnegative): ";
    // cin >> n;
    vector<string> allCases;
    parentheses(4, allCases);
    for (int i = 0; i < allCases.size(); i++)
    {
        cout << i+1 << " " << allCases[i] << endl; 
    }
    return 0;
}