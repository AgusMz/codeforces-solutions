#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {
        std::vector<int> a(n);

        int counter     = 1;
        int max_counter = 1;

        for (int i = 0; i < n; i++) {
            std::cin >> a[i];

            if (i > 0 && a[i-1] <= a[i]) {
                counter++;
                if (counter > max_counter) {
                    max_counter = counter;
                }
            } else {
                counter = 1;
            }
        }

        std::cout << max_counter << "\n";
    }

    return 0;
}

// solved - 23/06/2026 - 46 ms - 0 KB memory