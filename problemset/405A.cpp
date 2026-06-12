#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector
#include <algorithm>    // std::sort

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;  // number of columns in the toy box

    if (std::cin >> n) {
        std::vector<int> a(n);  // number of amount of cubes in the i-th column
        
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        std::sort(a.begin(), a.end());

        for (int x : a) {
            std::cout << x << " ";
        }
    }

    return 0;
}

// solved - 12/06/2026 - 62 ms - 0 KB memory