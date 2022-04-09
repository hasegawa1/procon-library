/**
 * @brief 連長圧縮
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <algorithm>

template<class T>
auto run_length_encoding(const T& s) {
    std::vector<std::pair<typename T::value_type, int>> res;
    for(const auto& e: s) {
        if(res.empty() || e != res.back().first) {
            res.emplace_back(e, 1);
        } else {
            res.back().second++;
        }
    }
    return res;
}
