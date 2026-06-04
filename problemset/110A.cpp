#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string n;
    
    if (std::cin >> n) {
        int count = 0;

        for (char num : n) {
            if (num == '4' || num == '7') {
                count++;
            }
        }

        if (count == 4 || count == 7) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}

// solved - 04/06/2026 - 92 ms - 0 KB memory