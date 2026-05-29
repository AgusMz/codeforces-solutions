#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k, next_round = 0;
    
    if (std::cin >> n >> k && n >= k) {
        std::vector<int> participants(n);
        for (size_t i = 0; i < n; i++) {
            std::cin >> participants[i];
        }

        for (int i = 0; i < n; i++) {
            if (participants[i] >= participants[k-1] && participants[i] > 0) next_round++;
        }
    }

    std::cout << next_round << "\n";

    return 0;
}

// solved - 29/05/2026 - 92 ms - 100 KB memory