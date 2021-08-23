/**
 * @brief 高速アダマール変換
 * @author hasegawa1
 */

#include <vector>
#include <cassert>

template<typename T>
std::vector<T> hadamard_transform(std::vector<T> v, bool rev) {
    const int n = v.size();
    assert((n & (n-1)) == 0); //ispow2

    for(int i=1; i<n; i<<=1) {
        for(int j=0; j<n; j++) {
            if((i&j) == 0) {
                T x = v[j];
                T y = v[j|i];
                v[j] = x + y;
                v[j|i] = x - y;
            }
        }
    }

    if(rev) {
        T inv = T(1) / n;
        for(auto &e: v) e *= inv;
    }

    return v;
}
