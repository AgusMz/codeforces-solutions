#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++) {
            int tmp;
            std::cin >> tmp;
            
            if (tmp == 1) {
                std::cout << std::abs(j - 3) + std::abs(i - 3);
            }
        }
    }

    return 0;
}

// solved - 31/05/2026 - 62 ms - 100 KB memory