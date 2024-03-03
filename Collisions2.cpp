#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        vector<vector<char>> v(a, vector<char>(b));
        for (int i = 0; i < a; i++)
        {
            
                cin >> v[i]>>ws;
        }
        int z = 0;
        for (int j = 0; j < b; j++)
        {
            int u = 0;
            for (int i = 0; i < a; i++)
            {
                if (v[i][j] == '1')
                {
                    u++;
                }
            }
            z += (u * (u - 1)) / 2;
        }
        cout << z << "\n";
    }
    return 0;
}
