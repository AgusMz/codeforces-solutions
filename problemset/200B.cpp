#include <iostream>     // std::cout, std::cin
#include <iomanip>      // std::fixed, std::setprecision

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; // number of orange juice drinks in the fridge

    if (std::cin >> n) {
        int p; // volume fraction of orange juice in the i-th drink (%)

        int total_p = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> p;
            total_p += p;
        }

        std::cout << std::fixed << std::setprecision(10) << (double)total_p / n << "\n";
    }

    return 0;
}

// solved - 08/06/2026 - 92 ms - 100 KB memory
