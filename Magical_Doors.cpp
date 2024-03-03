#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int count = 0;
        int flipped=0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && !flipped)
            {
                count++;
                flipped =1;
            }
            else if (s[i] == '1' && flipped)
            {
                count++;
                flipped =0;
            }
        }

        cout << count << endl;
    }

    return 0;
}