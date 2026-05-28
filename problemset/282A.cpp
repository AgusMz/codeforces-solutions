#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, x = 0;

    if (std::cin >> n) {
        while (n--) {
            std::string s;
            std::cin >> s;

            if (s[1] == '+') {
                x++;
            } else {
                x--;
            }
        }
    }

    std::cout << x << "\n";
    
    return 0;
}

// solved - 29/05/2026 - 46 ms - 100 KB memory