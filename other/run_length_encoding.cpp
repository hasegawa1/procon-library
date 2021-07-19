/**
 * @brief 連長圧縮
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <algorithm>

// verify: https://atcoder.jp/contests/typical90/submissions/24392343
std::vector<std::pair<char,int>> run_length_encoding(const std::string & s) {
    std::vector<std::pair<char,int>> res;
    for(const auto e: s) {
        if(res.empty()) {
            res.emplace_back(e, 1);
        } else if(e == res.back().first) {
            res.back().second++;
        } else {
            res.emplace_back(e, 1);
        }
    }
    return res;
}
