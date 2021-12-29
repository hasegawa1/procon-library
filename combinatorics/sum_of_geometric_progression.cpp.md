---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "\u7B49\u6BD4\u6570\u5217\u306E\u548C"
    links:
    - https://atcoder.jp/contests/arc020/submissions/25307694
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.1/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: atcoder/math:\
    \ line -1: no such header\n"
  code: "/**\n * @brief \u7B49\u6BD4\u6570\u5217\u306E\u548C\n * @author hasegawa1\n\
    \ */\n\n// veirfy: https://atcoder.jp/contests/arc020/submissions/25307694\n\n\
    #include <vector>\n#include <cassert>\n#include \"atcoder/math\"\n#include \"\
    atcoder/modint\"\n\ntemplate<typename Modint>\n// requires atcoder::modint\nModint\
    \ sum_of_geometric_progression(const Modint &a, const Modint &r, long long int\
    \ n) {\n    assert(n > 0);\n    if(r.val() == 0) return a;\n    if(r.val() ==\
    \ 1) return a * n;\n\n    if(atcoder::internal::is_prime_constexpr(Modint::mod()))\
    \ return a * (r.pow(n)-1) / (r-1);\n\n    std::vector<Modint> r_pow(63, r);\n\
    \    std::vector<Modint> r_pow_sum(63, 1);\n    for(int i=1; i<63; i++) {\n  \
    \      r_pow[i] = r_pow[i-1] * r_pow[i-1];\n        r_pow_sum[i] = (1+r_pow[i-1])\
    \ * r_pow_sum[i-1];\n    }\n    Modint res;\n    long long int tmp = 0;\n    for(int\
    \ i=0; i<63; i++) {\n        if(n>>i & 1) {\n            res += r_pow_sum[i] *\
    \ r.pow(tmp);\n            tmp |= 1LL<<i;\n        }\n    }\n    return a * res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/sum_of_geometric_progression.cpp
  requiredBy: []
  timestamp: '2021-08-24 13:23:52+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/sum_of_geometric_progression.cpp
layout: document
redirect_from:
- /library/combinatorics/sum_of_geometric_progression.cpp
- /library/combinatorics/sum_of_geometric_progression.cpp.html
title: "\u7B49\u6BD4\u6570\u5217\u306E\u548C"
---
