#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;

    if (std::cin >> a >> b >> c) {
        int combinations[6] = {
            a + b + c,
            a * b * c,
            a + b * c,
            a * b + c,
            (a + b) * c,
            a * (b + c)
        };

        int max_value = 0;

        for (int i = 0; i < 6; i++) {
            if (combinations[i] > max_value) {
                max_value = combinations[i];
            }
        }

        std::cout << max_value << "\n";
    }

    return 0;
}

// solved - 17/06/2026 - 31 ms - 0 KB memory