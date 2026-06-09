#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector
#include <algorithm>    // std::sort

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {       
        int sumatory = 0; // sumatory of coins

        std::vector<int> coins(n);

        for (int i = 0; i < n; i++) {
            std::cin >> coins[i];

            sumatory += coins[i];
        }

        std::sort(coins.begin(), coins.end());

        int my_coins = 0;

        int counter = 0;

        int len = static_cast<int>(coins.size());
        for (int i = len-1; i >= 0; i--) {
                if (sumatory >= my_coins) {
                    my_coins += coins[i];
                    sumatory -= coins[i];
                    counter++;
                }
        }

        std::cout << counter << "\n";
    }
        
    return 0;
}

// solved - 09/06/2026 - 92 ms - 0 KB memory
