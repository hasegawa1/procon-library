/**
 * @brief 編集距離
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <algorithm>

int edit_distance(const std::string &s, const std::string &t) {
    const int n = s.size();
    const int m = t.size();
    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1, n+m));

    for(int i=0; i<=n; i++) {
        dp[i][0] = i;
    }
    for(int j=0; j<=m; j++) {
        dp[0][j] = j;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            dp[i][j] = std::min({dp[i][j], dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s[i-1] != t[j-1])});
        }
    }

    return dp[n][m];
}
