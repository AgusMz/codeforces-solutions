#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; // guests

    if (std::cin >> n) {
        std::vector<int> p(n);
        for (int i = 0; i < n; i++) {
            std::cin >> p[i];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == p[j]) {
                    std::cout << j+1 << " ";
                }
            }
        }
    }

    return 0;
}

// solved - 08/06/2026 - 92 ms - 0 KB memory
