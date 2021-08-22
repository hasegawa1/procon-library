---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/Compress.cpp
    title: "\u5EA7\u6A19\u5727\u7E2E"
  - icon: ':heavy_check_mark:'
    path: other/inversion_number.cpp
    title: "\u8EE2\u5012\u6570"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D
  bundledCode: "#line 1 \"aizu/alds1_5_d.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D\"\
    \n\n#include <iostream>\n#line 1 \"other/Compress.cpp\"\n/**\n * @brief \u5EA7\
    \u6A19\u5727\u7E2E\n * @author hasegawa1\n */\n\n#include <vector>\n#include <cassert>\n\
    #include <algorithm>\n\ntemplate<typename T>\nclass Compress {\nprivate:\n   \
    \ bool _is_ready = false;\n    std::vector<T> _compress;\n\n    void build() {\n\
    \        std::sort(_compress.begin(), _compress.end());\n        _compress.erase(std::unique(_compress.begin(),\
    \ _compress.end()), _compress.end());\n        _is_ready = true;\n    }\n\npublic:\n\
    \    explicit Compress() = default;\n    explicit Compress(const T& a) {\n   \
    \     add(a);\n    }\n    explicit Compress(const std::vector<T>& a) {\n     \
    \   add(a);\n    }\n\n    void add(const T& a) {\n        _compress.emplace_back(a);\n\
    \        _is_ready = false;\n    }\n\n    void add(const std::vector<T>& a) {\n\
    \        std::copy(a.begin(), a.end(), std::back_inserter(_compress));\n     \
    \   _is_ready = false;\n    }\n\n    int size() {\n        if(!_is_ready) build();\n\
    \        return _compress.size();\n    }\n\n    int get(const T& g) {\n      \
    \  if(!_is_ready) build();\n        auto itr = std::lower_bound(_compress.begin(),\
    \ _compress.end(), g);\n        assert(itr != _compress.end());\n        assert(*itr\
    \ == g);\n        return std::distance(_compress.begin(), itr);\n    }\n\n   \
    \ const std::vector<int> get_all(const std::vector<T>& g) {\n        std::vector<int>\
    \ res;\n        std::transform(g.begin(), g.end(), std::back_inserter(res), [&](const\
    \ T & x) {return get(x);});\n        return res;\n    }\n\n    int lower_bound(const\
    \ T &g) {\n        if(!_is_ready) build();\n        return std::distance(_compress.begin(),\
    \ std::lower_bound(_compress.begin(), _compress.end(), g));\n    }\n\n    int\
    \ upper_bound(const T &g) {\n        if(!_is_ready) build();\n        return std::distance(_compress.begin(),\
    \ std::upper_bound(_compress.begin(), _compress.end(), g));\n    }\n\n    int\
    \ operator()(const T& g) {\n        return get(g);\n    }\n\n    const T& operator[](int\
    \ k) {\n        if(!_is_ready) build();\n        assert(0 <= k);\n        assert(k\
    \ < size());\n        return _compress[k];\n    }\n};\n#line 1 \"other/inversion_number.cpp\"\
    \n/**\n * @brief \u8EE2\u5012\u6570\n * @author hasegawa1\n */\n\n#line 8 \"other/inversion_number.cpp\"\
    \n#include <cstdint>\n#include <atcoder/fenwicktree>\n\nint64_t inversion_number(const\
    \ std::vector<int> & v) {\n    const int N = v.size();\n    const int M = *std::max_element(v.begin(),\
    \ v.end()) + 1;\n    atcoder::fenwick_tree<int> fen(M);\n\n    int64_t res = 0;\n\
    \    for(int i=0; i<N; i++) {\n        res += fen.sum(v[i]+1, M);\n        fen.add(v[i],\
    \ 1);\n    }\n\n    return res;\n}\n#line 6 \"aizu/alds1_5_d.test.cpp\"\n\nusing\
    \ namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++)\
    \ {\n        cin >> a[i];\n    }\n\n    Compress cmp(a);\n\n    cout << inversion_number(cmp.get_all(a))\
    \ << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_5_D\"\
    \n\n#include <iostream>\n#include \"../other/Compress.cpp\"\n#include \"../other/inversion_number.cpp\"\
    \n\nusing namespace std;\n\nint main(void) {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \n    int n;\n    cin >> n;\n    vector<int> a(n);\n    for(int i=0; i<n; i++)\
    \ {\n        cin >> a[i];\n    }\n\n    Compress cmp(a);\n\n    cout << inversion_number(cmp.get_all(a))\
    \ << endl;\n}\n"
  dependsOn:
  - other/Compress.cpp
  - other/inversion_number.cpp
  isVerificationFile: true
  path: aizu/alds1_5_d.test.cpp
  requiredBy: []
  timestamp: '2021-08-22 21:17:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/alds1_5_d.test.cpp
layout: document
redirect_from:
- /verify/aizu/alds1_5_d.test.cpp
- /verify/aizu/alds1_5_d.test.cpp.html
title: aizu/alds1_5_d.test.cpp
---
