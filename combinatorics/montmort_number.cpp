/**
 * @brief モンモール数
 * @author hasegawa1
 */

#include <vector>

template<typename Tmod>
std::vector<Tmod> montmort_number(int n) {
    std::vector<Tmod> res(n+1);
    for(int i=2; i<=n; i++) {
        res[i] = res[i-1] * i;
        if(i & 1) res[i]--;
        else res[i]++;
    }
    return res;
}
