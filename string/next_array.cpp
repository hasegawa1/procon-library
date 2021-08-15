/**
 * @brief next_array
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/abc214/submissions/25069137

#include <vector>
#include <string>

std::vector<std::vector<int>> next_array(const std::string &s) {
    int n = s.size();
    std::vector<std::vector<int>> res(n+1, std::vector<int>(26, n));
    for (int i=n-1; i>=0; i--) {
        for (int j=0; j<26; j++) {
            res[i][j] = res[i+1][j];
        }
        res[i][s[i]-'a'] = i;
    }
    return res;
}
