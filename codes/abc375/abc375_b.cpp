#include <iostream>
#include <iomanip>
#include <vector>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace boost::multiprecision;

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> points(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> points[i].first >> points[i].second;
    }

    cpp_dec_float_50 total_cost = 0;

    auto distance = [](int x1, int y1, int x2, int y2) -> cpp_dec_float_50 {
        cpp_dec_float_50 dx = x1 - x2;
        cpp_dec_float_50 dy = y1 - y2;
        return sqrt(dx * dx + dy * dy);
    };

    total_cost += distance(0, 0, points[0].first, points[0].second);

    for (int i = 0; i < N - 1; ++i) {
        total_cost += distance(points[i].first, points[i].second, points[i + 1].first, points[i + 1].second);
    }

    total_cost += distance(points[N - 1].first, points[N - 1].second, 0, 0);

    std::cout << std::fixed << std::setprecision(20) << total_cost << std::endl;

    return 0;
}
