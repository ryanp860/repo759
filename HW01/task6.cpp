#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
    (void)argc;
    const int n = std::atoi(argv[1]);

    for (int i = 0; i <= n; ++i) {
        if (i > 0) {
            std::printf(" ");
        }
        std::printf("%d", i);
    }
    std::printf("\n");

    for (int i = n; i >= 0; --i) {
        if (i < n) {
            std::cout << ' ';
        }
        std::cout << i;
    }
    std::cout << '\n';

    return 0;
}
