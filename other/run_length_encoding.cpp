/**
 * @brief 連長圧縮
 * @author hasegawa1
 */

#include <vector>
#include <string>
#include <algorithm>

std::vector<std::pair<char,int>> run_length_encoding(const std::string & s) {
    std::vector<std::pair<char,int>> res;
    for(const auto e: s) {
        if(res.empty() || e != res.back().first) {
            res.emplace_back(e, 1);
        } else {
            res.back().second++;
        }
    }
    return res;
}

template<typename T>
std::vector<std::pair<T,int>> run_length_encoding(const std::vector<T> & v) {
    std::vector<std::pair<T,int>> res;
    for(const auto e: v) {
        if(res.empty() || e != res.back().first) {
            res.emplace_back(e, 1);
        } else {
            res.back().second++;
        }
    }
    return res;
}
