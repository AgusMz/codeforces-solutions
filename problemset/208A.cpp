#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;

    if (std::cin >> s) {
        const int len = static_cast<int>(s.length());
        for (size_t i = 0; i < len;) {
            if (i + 2 < len && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
                std::cout << " ";
                i += 3;
            } else {
                std::cout << s[i++];
            }
        }

        std::cout << "\n";
    }

    return 0;
}

// solved - 24/06/2026 - 92 ms - 100 KB memory