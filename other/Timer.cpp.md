---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u30BF\u30A4\u30DE\u30FC"
    links: []
  bundledCode: "#line 1 \"other/Timer.cpp\"\n/**\n * @brief \u30BF\u30A4\u30DE\u30FC\
    \n * @author hasegawa1\n */\n\n#include <chrono>\n\nclass Timer {\nprivate:\n\
    \    std::chrono::system_clock::time_point start;\n\npublic:\n    Timer() { reset();\
    \ }\n\n    void reset() {\n        start = std::chrono::system_clock::now();\n\
    \    }\n\n    std::chrono::milliseconds::rep elapsed() {\n        std::chrono::system_clock::time_point\
    \ now = std::chrono::system_clock::now();\n        return std::chrono::duration_cast<\
    \ std::chrono::milliseconds >(now - start).count();\n    }\n};\n"
  code: "/**\n * @brief \u30BF\u30A4\u30DE\u30FC\n * @author hasegawa1\n */\n\n#include\
    \ <chrono>\n\nclass Timer {\nprivate:\n    std::chrono::system_clock::time_point\
    \ start;\n\npublic:\n    Timer() { reset(); }\n\n    void reset() {\n        start\
    \ = std::chrono::system_clock::now();\n    }\n\n    std::chrono::milliseconds::rep\
    \ elapsed() {\n        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();\n\
    \        return std::chrono::duration_cast< std::chrono::milliseconds >(now -\
    \ start).count();\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: other/Timer.cpp
  requiredBy: []
  timestamp: '2021-11-03 19:31:21+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/Timer.cpp
layout: document
redirect_from:
- /library/other/Timer.cpp
- /library/other/Timer.cpp.html
title: "\u30BF\u30A4\u30DE\u30FC"
---
