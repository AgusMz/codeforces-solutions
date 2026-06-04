#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;

    if (std::cin >> n >> k) {
        while (k--) {
            if (n % 10 == 0) {
                n /= 10;
            } else {
                n--;
            }
        }

        std::cout << n << "\n";
    }

    return 0;
}

// solved - 04/06/2026 - 31 ms - 0 KB memory