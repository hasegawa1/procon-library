/**
 * @brief 座標圧縮
 * @author hasegawa1
 */

#include <vector>
#include <cassert>
#include <algorithm>

template<typename T>
class Compress {
private:
    bool _is_ready = false;
    std::vector<T> _compress;

    void build() {
        std::sort(_compress.begin(), _compress.end());
        _compress.erase(std::unique(_compress.begin(), _compress.end()), _compress.end());
        _is_ready = true;
    }

public:
    explicit Compress() = default;
    explicit Compress(const T& a) {
        add(a);
    }
    explicit Compress(const std::vector<T>& a) {
        add(a);
    }

    void add(const T& a) {
        _compress.emplace_back(a);
        _is_ready = false;
    }

    void add(const std::vector<T>& a) {
        std::copy(a.begin(), a.end(), std::back_inserter(_compress));
        _is_ready = false;
    }

    int size() {
        if(!_is_ready) build();
        return _compress.size();
    }

    int get(const T& g) {
        if(!_is_ready) build();
        auto itr = std::lower_bound(_compress.begin(), _compress.end(), g);
        assert(itr != _compress.end());
        assert(*itr == g);
        return std::distance(_compress.begin(), itr);
    }

    const std::vector<int> get_all(const std::vector<T>& g) {
        std::vector<int> res;
        std::transform(g.begin(), g.end(), std::back_inserter(res), [&](const T & x) {return get(x);});
        return res;
    }

    int lower_bound(const T &g) {
        if(!_is_ready) build();
        return std::distance(_compress.begin(), std::lower_bound(_compress.begin(), _compress.end(), g));
    }

    int upper_bound(const T &g) {
        if(!_is_ready) build();
        return std::distance(_compress.begin(), std::upper_bound(_compress.begin(), _compress.end(), g));
    }

    int operator()(const T& g) {
        return get(g);
    }

    const T& operator[](int k) {
        if(!_is_ready) build();
        assert(0 <= k);
        assert(k < size());
        return _compress[k];
    }
};
