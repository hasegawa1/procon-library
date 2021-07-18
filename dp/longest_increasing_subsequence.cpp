/**
 * @brief 最長増加部分列（LIS: Longest Increasing Subsequence）
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>

template<typename T>
int longest_increasing_subsequence(const std::vector<T> &v, bool strict) {
    std::vector<T> lis;
    lis.reserve(v.size());
    for(auto e: v) {
        auto itr = strict ? std::lower_bound(lis.begin(), lis.end(), e) : std::upper_bound(lis.begin(), lis.end(), e);
        if(itr == lis.end()) lis.emplace_back(e);
        else *itr = e;
    }
    return lis.size();
}
