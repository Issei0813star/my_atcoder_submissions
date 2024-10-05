#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    if (S.size() >= 3 && S.substr(S.size() - 3) == "san") {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
