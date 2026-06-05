#include <iostream>     // std::cout, std::cin
#include <cmath>        // std::abs

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; // number of rooms

    if (std::cin >> n) {
        int p; // people living in the i-th room
        int q; // room's capacity

        int ans = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> p >> q;
            
            if (std::abs(q - p) >= 2) {
                ans++;
            }
        }

        std::cout << ans << "\n";
        
    }

    return 0;
}

// solved - 06/06/2026 - 46 ms - 0 KB memory