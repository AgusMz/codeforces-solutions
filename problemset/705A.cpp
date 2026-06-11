#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;      // feeling layers

    if (std::cin >> n) {
        switch (n) {
            case 1:
                std::cout << "I hate it\n";
                break;
            case 2:
                std::cout << "I hate that I love it\n";
                break;
            case 3:
                std::cout << "I hate that I love that I hate it\n";
                break;
            default:
                if (n % 2 == 0) {
                    for (int i = 1; i <= n/2-1; i++) {
                        std::cout << "I hate that I love that ";
                    }

                    std::cout << "I hate that I love it\n";
                } else {
                    for (int i = 1; i <= n/2; i++) {
                        std::cout << "I hate that I love that ";
                    }

                    std::cout << "I hate it\n";
                }
                break;
        }
    }

    return 0;
}

// solved - 12/06/2026 - 31 ms - 0 KB memory