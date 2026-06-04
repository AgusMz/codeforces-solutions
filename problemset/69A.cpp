#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {
        int sum_x = 0, sum_y = 0, sum_z = 0;
        
        while (n--) {
            int x, y, z;
            std::cin >> x >> y >> z;
            sum_x += x;
            sum_y += y;
            sum_z += z;
        }

        if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}

// solved - 04/06/2026 - 62 ms - 0 KB memory