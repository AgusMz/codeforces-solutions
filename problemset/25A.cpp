#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {
        int c_even = 0;
        int c_odd  = 0;
        int last_pos_even;
        int last_pos_odd;

        for (int i = 1; i <= n; i++) {
            int a;
            std::cin >> a;

            if (a % 2 == 0) {
                c_even++;
                last_pos_even = i;
            } else {
                c_odd++;
                last_pos_odd = i;
            }
        }

        if (c_even == 1) {
            std::cout << last_pos_even << "\n";
        } else {
            std::cout << last_pos_odd << "\n";
        }
    }

    return 0;
}

// solved - 18/06/2026 - 92 ms - 0 KB memory