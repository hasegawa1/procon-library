/**
 * @brief stovi
 * @author hasegawa1
 */

#include <vector>
#include <string>

std::vector<int> stovi(const std::string &str, const char padding='0') {
    std::vector<int> res;
    res.reserve(str.size());
    for(const char &c: str) {
        res.emplace_back(c - padding);
    }
    return res;
}
