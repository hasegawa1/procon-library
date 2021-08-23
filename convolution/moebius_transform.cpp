/**
 * @brief 高速メビウス変換
 * @author hasegawa1
 */

#include <vector>
#include <cassert>

template<typename T>
std::vector<T> moebius_transform(std::vector<T> v, bool lower) {
    int n = v.size();
    assert((n == 0) || ((n & (n-1)) == 0)); //ispow2

    if(lower) {
        for(int i=1; i<n; i<<=1) {
            for(int j=0; j<n; j++) {
                if((i&j) == 0) v[j|i] -= v[j];
            }
        }
    } else {
        for(int i=1; i<n; i<<=1) {
            for(int j=0; j<n; j++) {
                if((i&j) == 0) v[j] -= v[j|i];
            }
        }
    }

    return v;
}
