#include <iostream>     // std::cout, std::cin
#include <algorithm>    // std::max

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; // tram stops

    if (std::cin >> n) {
        int aboard = 0;
        int min_capacity = 0;

        for (int i = 0; i < n; i++) {
            int a; // exit
            int b; // enter

            std::cin >> a >> b;

            aboard -= a;
            aboard += b;
            
            min_capacity = std::max(min_capacity, aboard);          
        }

        std::cout << min_capacity << "\n";
    }

    return 0;
}

// solved - 05/06/2026 - 92 ms - 0 KB memory