#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; // cases

    if (std::cin >> t) {
        while (t--) {
            int a, b;
            std::cin >> a >> b;

            if (a % b == 0) {
                std::cout << 0 << "\n";
            } else {
                if (a < b) {
                    std::cout << b - a << "\n";
                } else {
                    const int moves = (a/b + 1) * b;

                    std::cout << moves - a << "\n";
                }
            }
        }
    }

    return 0;
}

// solved - 11/06/2026 - 46 ms - 0 KB memory