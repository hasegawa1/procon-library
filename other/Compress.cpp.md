---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/alds1_5_d.test.cpp
    title: aizu/alds1_5_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u5EA7\u6A19\u5727\u7E2E"
    links: []
  bundledCode: "#line 1 \"other/Compress.cpp\"\n/**\n * @brief \u5EA7\u6A19\u5727\u7E2E\
    \n * @author hasegawa1\n */\n\n#include <vector>\n#include <cassert>\n#include\
    \ <algorithm>\n\ntemplate<typename T>\nclass Compress {\nprivate:\n    bool _is_ready\
    \ = false;\n    std::vector<T> _compress;\n\n    void build() {\n        std::sort(_compress.begin(),\
    \ _compress.end());\n        _compress.erase(std::unique(_compress.begin(), _compress.end()),\
    \ _compress.end());\n        _is_ready = true;\n    }\n\npublic:\n    explicit\
    \ Compress() = default;\n    explicit Compress(const T& a) {\n        add(a);\n\
    \    }\n    explicit Compress(const std::vector<T>& a) {\n        add(a);\n  \
    \  }\n\n    void add(const T& a) {\n        _compress.emplace_back(a);\n     \
    \   _is_ready = false;\n    }\n\n    void add(const std::vector<T>& a) {\n   \
    \     std::copy(a.begin(), a.end(), std::back_inserter(_compress));\n        _is_ready\
    \ = false;\n    }\n\n    int size() {\n        if(!_is_ready) build();\n     \
    \   return _compress.size();\n    }\n\n    int get(const T& g) {\n        if(!_is_ready)\
    \ build();\n        auto itr = std::lower_bound(_compress.begin(), _compress.end(),\
    \ g);\n        assert(itr != _compress.end());\n        assert(*itr == g);\n \
    \       return std::distance(_compress.begin(), itr);\n    }\n\n    const std::vector<int>\
    \ get_all(const std::vector<T>& g) {\n        std::vector<int> res;\n        std::transform(g.begin(),\
    \ g.end(), std::back_inserter(res), [&](const T & x) {return get(x);});\n    \
    \    return res;\n    }\n\n    int lower_bound(const T &g) {\n        if(!_is_ready)\
    \ build();\n        return std::distance(_compress.begin(), std::lower_bound(_compress.begin(),\
    \ _compress.end(), g));\n    }\n\n    int upper_bound(const T &g) {\n        if(!_is_ready)\
    \ build();\n        return std::distance(_compress.begin(), std::upper_bound(_compress.begin(),\
    \ _compress.end(), g));\n    }\n\n    int operator()(const T& g) {\n        return\
    \ get(g);\n    }\n\n    const T& operator[](int k) {\n        if(!_is_ready) build();\n\
    \        assert(0 <= k);\n        assert(k < size());\n        return _compress[k];\n\
    \    }\n};\n"
  code: "/**\n * @brief \u5EA7\u6A19\u5727\u7E2E\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <cassert>\n#include <algorithm>\n\ntemplate<typename T>\n\
    class Compress {\nprivate:\n    bool _is_ready = false;\n    std::vector<T> _compress;\n\
    \n    void build() {\n        std::sort(_compress.begin(), _compress.end());\n\
    \        _compress.erase(std::unique(_compress.begin(), _compress.end()), _compress.end());\n\
    \        _is_ready = true;\n    }\n\npublic:\n    explicit Compress() = default;\n\
    \    explicit Compress(const T& a) {\n        add(a);\n    }\n    explicit Compress(const\
    \ std::vector<T>& a) {\n        add(a);\n    }\n\n    void add(const T& a) {\n\
    \        _compress.emplace_back(a);\n        _is_ready = false;\n    }\n\n   \
    \ void add(const std::vector<T>& a) {\n        std::copy(a.begin(), a.end(), std::back_inserter(_compress));\n\
    \        _is_ready = false;\n    }\n\n    int size() {\n        if(!_is_ready)\
    \ build();\n        return _compress.size();\n    }\n\n    int get(const T& g)\
    \ {\n        if(!_is_ready) build();\n        auto itr = std::lower_bound(_compress.begin(),\
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
    \ < size());\n        return _compress[k];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Compress.cpp
  requiredBy: []
  timestamp: '2021-08-22 21:17:08+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/alds1_5_d.test.cpp
documentation_of: other/Compress.cpp
layout: document
redirect_from:
- /library/other/Compress.cpp
- /library/other/Compress.cpp.html
title: "\u5EA7\u6A19\u5727\u7E2E"
---
