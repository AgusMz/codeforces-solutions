#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;

    if (std::cin >> n >> m) {
        std::string pad(m, '#');
        
        std::string snake1 = std::string(m-1, '.') + '#';
        std::string snake2 = '#' + std::string(m-1, '.');

        bool change = false;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                std::cout << pad << "\n";
            } else {
                if (!change) {
                    std::cout << snake1 << "\n";
                    change = true;
                } else {
                    std::cout << snake2 << "\n";
                    change = false;
                }
            }
        }
    }

    return 0;
}

// solved - 20/06/2026 - 46 ms - 0 KB memory