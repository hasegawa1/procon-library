/**
 * @brief ヒストグラム中の最大長方形の面積
 * @author hasegawa1
 */

#include <vector>
#include <stack>
#include <algorithm>

template<typename T>
int64_t largest_rectangle(std::vector<T> histogram) {
    int N = histogram.size();
    histogram.emplace_back(0);
    std::vector<int> left(N+1);
    std::stack<int> stk;

    int64_t res = 0;
    for(int i=0; i<=N; i++) {
        while(!stk.empty() && histogram[stk.top()] >= histogram[i]) {
            res = std::max(res, (int64_t)(i-left[stk.top()]-1) * histogram[stk.top()]);
            stk.pop();
        }
        left[i] = stk.empty() ? -1 : stk.top();
        stk.emplace(i);
    }

    return res;
}
