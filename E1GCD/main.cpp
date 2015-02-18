#include <iostream>

using namespace std;

int gcd(int u, int v)
{
        int t;
        while(u > 0)
        {
            if(u < v)
            {
                t = u; u = v; v = t;
            }
            u = u % v;
        }
        return v;
}

int main()
{
    int MAX = 10;
    int a[MAX][MAX];

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if(gcd(i+1,j+1) == 1)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
