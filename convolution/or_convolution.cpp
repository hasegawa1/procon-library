/**
 * @brief Bitwise Or Convolution
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>
#include "./zeta_transform.cpp"
#include "./moebius_transform.cpp"

template<typename T>
std::vector<T> or_convolution(const std::vector<T> &a, const std::vector<T> &b) {
    auto sum_a = zeta_transform(a, true);
    auto sum_b = zeta_transform(b, true);
    std::vector<T> sum_c;
    std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());
    return moebius_transform(sum_c, true);
}
