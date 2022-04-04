#include <iostream>
using namespace std;

int main()
{
    long long int count = 0;
    for (int x = 100; x <= 1000; x++)
    {
        for (int y = 100; y <= 1000; y++)
        {
            for (int z = 100; z <= 1000; z++)
            {
                for (int t = 100; t <= 1000; t++)
                {
                    if (x+y+z+t == 1000)
                    {
                        cout << "(" << x << ","
                                    << y << ","
                                    << z << ","
                                    << t << ")" << endl; 
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
}

//run smooth but a bit slow (30 mins :))
// ...
// (698,101,101,100)
// (698,102,100,100)
// (699,100,100,101)
// (699,100,101,100)
// (699,101,100,100)
// (700,100,100,100)
// 36361101
