---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u4E8C\u5206\u63A2\u7D22"
    links: []
  bundledCode: "#line 1 \"other/binary_search.cpp\"\n/**\n * @brief \u4E8C\u5206\u63A2\
    \u7D22\n * @author hasegawa1\n */\n\n#include <cmath>\n#include <algorithm>\n\n\
    template<typename T, typename F>\nT bin_search(T ok, T ng, F &check) {\n    //\
    \ for(int _=0; _<100; _++) {\n    while(std::abs(ok-ng) > 1) {\n        T mid\
    \ = std::min(ok, ng) + (std::max(ok, ng) - std::min(ok, ng)) / 2;\n        if(check(mid))\
    \ {\n            ok = mid;\n        } else {\n            ng = mid;\n        }\n\
    \    }\n    return ok;\n}\n"
  code: "/**\n * @brief \u4E8C\u5206\u63A2\u7D22\n * @author hasegawa1\n */\n\n#include\
    \ <cmath>\n#include <algorithm>\n\ntemplate<typename T, typename F>\nT bin_search(T\
    \ ok, T ng, F &check) {\n    // for(int _=0; _<100; _++) {\n    while(std::abs(ok-ng)\
    \ > 1) {\n        T mid = std::min(ok, ng) + (std::max(ok, ng) - std::min(ok,\
    \ ng)) / 2;\n        if(check(mid)) {\n            ok = mid;\n        } else {\n\
    \            ng = mid;\n        }\n    }\n    return ok;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/binary_search.cpp
  requiredBy: []
  timestamp: '2021-07-22 19:57:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/binary_search.cpp
layout: document
redirect_from:
- /library/other/binary_search.cpp
- /library/other/binary_search.cpp.html
title: "\u4E8C\u5206\u63A2\u7D22"
---
