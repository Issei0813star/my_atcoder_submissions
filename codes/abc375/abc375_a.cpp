#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    int count = 0;
    
    for (int i = 0; i <= N - 3; ++i) {
        if (S[i] == '#' && S[i+1] == '.' && S[i+2] == '#') {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
