/**
 * @brief Bitwise Xor Convolution
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>
#include "./hadamard_transform.cpp"

template<typename T>
std::vector<T> xor_convolution(const std::vector<T> &a, const std::vector<T> &b) {
    auto sum_a = hadamard_transform(a, false);
    auto sum_b = hadamard_transform(b, false);
    std::vector<T> sum_c;
    std::transform(sum_a.begin(), sum_a.end(), sum_b.begin(), std::back_inserter(sum_c), std::multiplies<T>());
    return hadamard_transform(sum_c, true);
}
