/**
 * @brief XOR 基底（noshi 基底）
 * @author hasegawa1
 * @ref https://twitter.com/noshi91/status/1200702280128856064
 */

#include <vector>
#include <algorithm>

template<typename T>
std::vector<T> xor_basis(const std::vector<T> v) {
    std::vector<T> basis;
    for(auto e: v) {
        for(const auto& b: basis) {
            e = std::min(e, e^b);
        }
        if(e) basis.emplace_back(e);
    }
    return basis;
}
