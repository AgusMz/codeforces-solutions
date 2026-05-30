#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m, n;
    if (std::cin >> m >> n) {
        std::cout << (m * n) / 2 << "\n";
    }

    return 0;
}

// solved - 30/05/2026 - 92 ms - 0 KB memory