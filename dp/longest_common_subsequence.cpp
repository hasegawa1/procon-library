/**
 * @brief 最長共通部分列（LCS: Longest Common Subsequence）
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <algorithm>

std::string longest_common_subsequence(const std::string &s, const std::string &t) {
    int n = s.size();
    int m = t.size();
    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            dp[i][j] = std::max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + (s[i-1]==t[j-1])});
        }
    }
    std::string res;
    while(n && m) {
        if(s[n-1] == t[m-1]) {
            res.push_back(s[n-1]);
            --n; --m;
        } else if(dp[n-1][m] == dp[n][m]) {
            --n;
        } else {
            --m;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
