#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a, b;

    if (std::cin >> a >> b) {

        int len = static_cast<int>(a.length());
        for (int i = 0; i < len; i++) {
            if (a[i] == b[i]) {
                std::cout << 0;
            } else {
                std::cout << 1;
            }
        }
    }

    return 0;
}

// solved - 10/06/2026 - 46 ms - 0 KB memory