#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        for (int i = 1; i <= n; i++) {
            dp[i][1] = dp[i - 1][1] + abs(a[i - 1] - a[i]);
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= min(i, k); j++) {
                dp[i][j] = dp[i - 1][j - 1] + abs(a[i - 1] - a[i]);
                for (int x = i - 2; x >= j - 1; x--) {
                    dp[i][j] = min(dp[i][j], dp[x][j - 1] + abs(a[x] - a[i]));
                }
            }
        }

        cout << dp[n][k] << endl;
    }

    return 0;
}
