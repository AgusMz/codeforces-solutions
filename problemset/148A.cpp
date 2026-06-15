#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k, l, m, n, d;

    if (std::cin >> k >> l >> m >> n >> d) {
        if (k == 1 || l == 1 || m == 1 || n == 1) {
            std::cout << d << "\n";
        } else {
            int damaged = 0;

            for (int i = 1; i <= d; i++) {
                if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
                    ++damaged;
                }
            }

            std::cout << damaged << "\n";
        }
    }

    return 0;
}

// solved - 16/06/2026 - 92 ms - 0 KB memory