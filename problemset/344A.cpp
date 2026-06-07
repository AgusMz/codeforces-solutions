#include <iostream>     // std:cout, std::cin 
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;              // number of magnets
    int groups = 1;     // groups of magnets

    std::string magnets;

    if (std::cin >> n) {
        for (int i = 0; i < n; i++) {
            std::string domino;
            std::cin >> domino;

            magnets += domino;            
        }

        int len = static_cast<int>(magnets.length());
        for (int i = 0; i < len; i++) {
            if (magnets[i] == magnets[i+1]) {
                groups++;
            } 
        }
    }

    std::cout << groups << "\n";

    return 0;
}

// solved - 07/06/2026 - 92 ms - 0 KB memory
