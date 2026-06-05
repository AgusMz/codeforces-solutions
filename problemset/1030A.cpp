#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    
    if (std::cin >> n) {
        int opinions;
        while (n--) {
            std::cin >> opinions;

            if (opinions == 1) {
                std::cout << "HARD\n";
                break;
            }
        }

        if (opinions == 0) {
            std::cout << "EASY\n";
        }
    }

    return 0;
}

// solved - 05/06/2026 - 46 ms - 0 KB memory