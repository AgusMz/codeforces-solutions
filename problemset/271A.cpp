#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector
#include <algorithm>    // std::reverse

bool check_distinct_digits(int n)
{
    std::vector<int> nums;

    int a;

    while (n > 0) {
        a = n % 10;
        n /= 10;

        nums.push_back(a);
    }

    std::reverse(nums.begin(), nums.end());

    int len = static_cast<int>(nums.size());
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int y;

    if (std::cin >> y) {
        int ans = y;
        while (true) {
            if (check_distinct_digits(y) == 0 && y > ans) {
                std::cout << y << "\n";
                break;
            } else {
                y++;
            }
        }
    }

    return 0;
}

// solved - 05/06/2026 - 92 ms - 0 KB memory