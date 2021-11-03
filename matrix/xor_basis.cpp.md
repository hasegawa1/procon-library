---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "XOR \u57FA\u5E95\uFF08noshi \u57FA\u5E95\uFF09"
    links:
    - https://twitter.com/noshi91/status/1200702280128856064
  bundledCode: "#line 1 \"matrix/xor_basis.cpp\"\n/**\n * @brief XOR \u57FA\u5E95\uFF08\
    noshi \u57FA\u5E95\uFF09\n * @author hasegawa1\n * @ref https://twitter.com/noshi91/status/1200702280128856064\n\
    \ */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename T>\nstd::vector<T>\
    \ xor_basis(const std::vector<T> v) {\n    std::vector<T> basis;\n    for(auto\
    \ e: v) {\n        for(const auto& b: basis) {\n            e = std::min(e, e^b);\n\
    \        }\n        if(e) basis.emplace_back(e);\n    }\n    return basis;\n}\n"
  code: "/**\n * @brief XOR \u57FA\u5E95\uFF08noshi \u57FA\u5E95\uFF09\n * @author\
    \ hasegawa1\n * @ref https://twitter.com/noshi91/status/1200702280128856064\n\
    \ */\n\n#include <vector>\n#include <algorithm>\n\ntemplate<typename T>\nstd::vector<T>\
    \ xor_basis(const std::vector<T> v) {\n    std::vector<T> basis;\n    for(auto\
    \ e: v) {\n        for(const auto& b: basis) {\n            e = std::min(e, e^b);\n\
    \        }\n        if(e) basis.emplace_back(e);\n    }\n    return basis;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: matrix/xor_basis.cpp
  requiredBy: []
  timestamp: '2021-11-03 19:30:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: matrix/xor_basis.cpp
layout: document
redirect_from:
- /library/matrix/xor_basis.cpp
- /library/matrix/xor_basis.cpp.html
title: "XOR \u57FA\u5E95\uFF08noshi \u57FA\u5E95\uFF09"
---
