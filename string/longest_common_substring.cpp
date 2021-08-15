/**
 * @brief 最長共通部分文字列
 * @author hasegawa1
 */

#include <atcoder/string>
#include <algorithm>

int longest_common_substring(const std::string &s, const std::string &t) {
    int S = s.size();
    int res = 0;

    std::string str = s + "_" + t;
    auto sa = atcoder::suffix_array(str);
    auto lcp = atcoder::lcp_array(str, sa);

    for(int i=0; i<(int)lcp.size(); i++) {
        if((sa[i] < S) ^ (sa[i+1] < S)) res = std::max(res, lcp[i]);
    }

    return res;
}
