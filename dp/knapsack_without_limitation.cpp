/**
 * @brief 個数制限なしナップサック問題
 * @author hasegawa1
 */

#include <vector>
#include <algorithm>

template<typename T>
T knapsack_without_limitation(const std::vector<T> & value, const std::vector<int> & weight, int W) {
    int N = value.size();
    std::vector<T> dp(W+1);

    for(int i=0; i<N; i++) {
        for(int j=0; j+weight[i]<=W; j++) {
            dp[j+weight[i]] = std::max(dp[j+weight[i]], dp[j] + value[i]);
        }
    }

    return dp[W];
}
