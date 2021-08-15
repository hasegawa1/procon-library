/**
 * @brief 文字列検索（Suffix Array）
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <atcoder/string>

bool string_search(const std::string &text, const std::vector<int> &suffix_array, const std::string &pattern) {
    int T = text.size();
    int P = pattern.size();

    int low = -1, high = T-1;
    while(low+1 < high) {
        int mid = (low + high) / 2;
        if((mid == -1 ? "" : text.substr(suffix_array[mid], P)) < pattern) low = mid;
        else high = mid;
    }

    return (high == -1 ? "" : text.substr(suffix_array[high], P)) == pattern;
}
