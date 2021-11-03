/**
 * @brief タイマー
 * @author hasegawa1
 */

#include <chrono>

class Timer {
private:
    std::chrono::system_clock::time_point start;

public:
    Timer() { reset(); }

    void reset() {
        start = std::chrono::system_clock::now();
    }

    std::chrono::milliseconds::rep elapsed() {
        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
        return std::chrono::duration_cast< std::chrono::milliseconds >(now - start).count();
    }
};
