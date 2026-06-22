#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t, a, b, c;

    if (std::cin >> t) {
        for (int i = 0; i < t; i++) {
            std::cin >> a >> b >> c;

            if (a + b == c || b + c == a || b == a + c) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        }
    }

    return 0;
}

// solved - 22/06/2026 - 31 ms - 0 KB memory