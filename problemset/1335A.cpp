#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;

    if (std::cin >> t) {
        while (t--) {
            int n;
            std::cin >> n;

            if (n > 2) {
                if (n % 2 == 0) std::cout << n/2 - 1 << "\n";
                else std::cout << n/2 << "\n";
            } else {
                std::cout << "0\n";
            }
        }
    }

    return 0;
}

// solved - 25/06/2026 - 46 ms - 0 KB memory