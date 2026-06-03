#include <iostream>     // std::cout, std::cin
#include <cmath>        // std::log, std::floor

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double a; // Limak weigh
    double b; // Bob weigh

    if (std::cin >> a >> b) {
        int years = std::floor(std::log(b/a) / std::log(1.5)) + 1;

        std::cout << years << "\n";
    }

    return 0;
}


// solved - 03/06/2026 - 46 ms - 0 KB memory