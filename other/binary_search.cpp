/**
 * @brief 二分探索
 * @author hasegawa1
 */

#include <cmath>
#include <algorithm>

template<typename T, typename F>
T bin_search(T ok, T ng, F &check) {
    // for(int _=0; _<100; _++) {
    while(std::abs(ok-ng) > 1) {
        T mid = std::min(ok, ng) + (std::max(ok, ng) - std::min(ok, ng)) / 2;
        if(check(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}
