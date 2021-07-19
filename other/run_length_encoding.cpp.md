---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u9023\u9577\u5727\u7E2E"
    links:
    - https://atcoder.jp/contests/typical90/submissions/24392343
  bundledCode: "#line 1 \"other/run_length_encoding.cpp\"\n/**\n * @brief \u9023\u9577\
    \u5727\u7E2E\n * @author hasegawa1\n */\n\n#include <vector>\n#include <string>\n\
    #include <algorithm>\n\n// verify: https://atcoder.jp/contests/typical90/submissions/24392343\n\
    std::vector<std::pair<char,int>> run_length_encoding(const std::string & s) {\n\
    \    std::vector<std::pair<char,int>> res;\n    for(const auto e: s) {\n     \
    \   if(res.empty()) {\n            res.emplace_back(e, 1);\n        } else if(e\
    \ == res.back().first) {\n            res.back().second++;\n        } else {\n\
    \            res.emplace_back(e, 1);\n        }\n    }\n    return res;\n}\n"
  code: "/**\n * @brief \u9023\u9577\u5727\u7E2E\n * @author hasegawa1\n */\n\n#include\
    \ <vector>\n#include <string>\n#include <algorithm>\n\n// verify: https://atcoder.jp/contests/typical90/submissions/24392343\n\
    std::vector<std::pair<char,int>> run_length_encoding(const std::string & s) {\n\
    \    std::vector<std::pair<char,int>> res;\n    for(const auto e: s) {\n     \
    \   if(res.empty()) {\n            res.emplace_back(e, 1);\n        } else if(e\
    \ == res.back().first) {\n            res.back().second++;\n        } else {\n\
    \            res.emplace_back(e, 1);\n        }\n    }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: other/run_length_encoding.cpp
  requiredBy: []
  timestamp: '2021-07-19 21:07:15+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/run_length_encoding.cpp
layout: document
redirect_from:
- /library/other/run_length_encoding.cpp
- /library/other/run_length_encoding.cpp.html
title: "\u9023\u9577\u5727\u7E2E"
---
