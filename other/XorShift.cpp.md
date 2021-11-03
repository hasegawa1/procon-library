---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Xorshift
    links: []
  bundledCode: "#line 1 \"other/XorShift.cpp\"\n/**\n * @brief Xorshift\n * @author\
    \ hasegawa1\n */\n\nclass XorShift {\n    using u32 = unsigned int;\n    using\
    \ u64 = unsigned long long int;\n\nprivate:\n    u64 x;\n    constexpr static\
    \ double inv = 1.0 / 0xffffffff;\n\npublic:\n    explicit XorShift(u64 seed =\
    \ 88172645463325252ULL): x(seed) {}\n\n    // generate random integer in [0, 2^64)\n\
    \    template<typename T = u64>\n    inline T get() {\n        x ^= x << 7ULL;\n\
    \        x ^= x >> 9ULL;\n        return x;\n    }\n\n    // generate random integer\
    \ in [0, r)\n    inline u32 get(u32 r) {\n        return (u64(get<u32>()) * r)\
    \ >> 32;\n    }\n\n    // generate random integer in [l, r)\n    inline u32 get(u32\
    \ l, u32 r) {\n        return l + get(r-l);\n    }\n\n    // generate random real\
    \ number in [0.0, 1.0]\n    inline double probability() {\n        return get<u32>()\
    \ * inv;\n    }\n};\n"
  code: "/**\n * @brief Xorshift\n * @author hasegawa1\n */\n\nclass XorShift {\n\
    \    using u32 = unsigned int;\n    using u64 = unsigned long long int;\n\nprivate:\n\
    \    u64 x;\n    constexpr static double inv = 1.0 / 0xffffffff;\n\npublic:\n\
    \    explicit XorShift(u64 seed = 88172645463325252ULL): x(seed) {}\n\n    //\
    \ generate random integer in [0, 2^64)\n    template<typename T = u64>\n    inline\
    \ T get() {\n        x ^= x << 7ULL;\n        x ^= x >> 9ULL;\n        return\
    \ x;\n    }\n\n    // generate random integer in [0, r)\n    inline u32 get(u32\
    \ r) {\n        return (u64(get<u32>()) * r) >> 32;\n    }\n\n    // generate\
    \ random integer in [l, r)\n    inline u32 get(u32 l, u32 r) {\n        return\
    \ l + get(r-l);\n    }\n\n    // generate random real number in [0.0, 1.0]\n \
    \   inline double probability() {\n        return get<u32>() * inv;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/XorShift.cpp
  requiredBy: []
  timestamp: '2021-11-03 20:12:50+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/XorShift.cpp
layout: document
redirect_from:
- /library/other/XorShift.cpp
- /library/other/XorShift.cpp.html
title: Xorshift
---
