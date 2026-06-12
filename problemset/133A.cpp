#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string p;  // program HQ9+

    if (std::cin >> p) {
        bool output = false;
        for (char c : p) {
            if (c == 'H' || c == 'Q' || c == '9') {
                output = true;
                break;
            }
        }

        if (output) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}

// solved - 12/06/2026 - 92 ms - 0 KB memory