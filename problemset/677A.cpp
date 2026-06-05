#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int h;
    int w = 0;

    if (std::cin >> n >> h) {
        int a;
        while (n--) {
            std::cin >> a;
            if (h < a) {
                a /= 2;
                w += 2;
            } else {
                w++;
            }
        }
    }

    std::cout << w << "\n";

    return 0;
}

// solved - 05/06/2026 - 46 ms - 0 KB memory