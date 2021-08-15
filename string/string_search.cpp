/**
 * @brief 文字列検索
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <atcoder/string>

std::vector<int> string_search(const std::string &text, const std::string &pattern) {
    int T = text.size();
    int P = pattern.size();
    std::vector<int> res;
    auto z = atcoder::z_algorithm(pattern + "_" + text);
    for(int i=0; i<T; i++) {
        if(z[i+P+1] == P) res.emplace_back(i);
    }
    return res;
}
