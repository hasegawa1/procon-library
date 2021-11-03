/**
 * @brief Xorshift
 * @author hasegawa1
 */

class XorShift {
    using u32 = unsigned int;
    using u64 = unsigned long long int;

private:
    u64 x;
    constexpr static double inv = 1.0 / 0xffffffff;

public:
    explicit XorShift(u64 seed = 88172645463325252ULL): x(seed) {}

    // generate random integer in [0, 2^64)
    template<typename T = u64>
    inline T get() {
        x ^= x << 7ULL;
        x ^= x >> 9ULL;
        return x;
    }

    // generate random integer in [0, r)
    inline u32 get(u32 r) {
        return (u64(get<u32>()) * r) >> 32;
    }

    // generate random integer in [l, r)
    inline u32 get(u32 l, u32 r) {
        return l + get(r-l);
    }

    // generate random real number in [0.0, 1.0]
    inline double probability() {
        return get<u32>() * inv;
    }
};
