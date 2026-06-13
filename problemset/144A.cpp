#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;      // number of soldiers in line

    if (std::cin >> n) {
        std::vector<int> nums(n);
        int max_val = -1, min_val = 101;
        int max_idx = 0, min_idx = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
            
            if (nums[i] > max_val) {
                max_val = nums[i];
                max_idx = i;
            }

            if (nums[i] <= min_val) {
                min_val = nums[i];
                min_idx = i;
            }
        }

        int seconds = max_idx + (n - 1 - min_idx);

        if (max_idx > min_idx) {
            seconds--;
        }

        std::cout << seconds << "\n";
    }

    return 0;
}

// solved - 13/06/2026 - 92 ms - 0 KB memory