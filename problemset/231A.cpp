#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int total_solved = 0;

    while (n--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a + b + c >= 2) total_solved++;
    }

    std::cout << total_solved << "\n";
}

// solved - 27/05/2026 - 62 ms - 100 KB memory