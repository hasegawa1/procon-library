/**
 * @brief 等差数列の和
 * @author hasegawa1
 */

// verify: https://atcoder.jp/contests/abc181/submissions/25308201

template<typename T>
T sum_of_arithmetric_progression(const T &a, const T &d, long long int n) {
    return n * (2*a + (n-1)*d) / 2;
}
