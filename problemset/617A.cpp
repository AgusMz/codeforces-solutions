#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x;

    if (std::cin >> x) {
        int steps = x / 5;

        if (x % 5 != 0) {
            steps++;
        }

        std::cout << steps << "\n";
    }

    return 0;
}

// solved - 03/06/2026 - 31 ms - 100 KB memory