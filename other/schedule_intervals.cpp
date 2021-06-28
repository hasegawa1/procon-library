/**
 * @brief 区間スケジューリング問題
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>

template<typename T>
std::vector<std::pair<T,T>> schedule_intervals(std::vector<std::pair<T,T>> intervals/*[l, r]*/, bool strict) {
    sort(intervals.begin(), intervals.end(), [](const auto &lhs, const auto &rhs) {
        return lhs.second < rhs.second;
    });

    T last = -1;
    std::vector<std::pair<T,T>> res;
    for(const auto [l, r]: intervals) {
        if(strict) {
            if(last < l) {
                res.emplace_back(l, r);
                last = r;
            }
        } else if(last <= l) {
            res.emplace_back(l, r);
            last = r;
        }
    }

    return res;
}
