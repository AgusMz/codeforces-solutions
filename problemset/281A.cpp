#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    
    if (std::cin >> s) {
        if (s[0] >= 'a' && s[0] <= 'z') {
            s[0] -= 32; // ASCII code for capitalized chars
        }
        std::cout << s << "\n";
    }

    return 0;
}

// solved - 03/06/2026 - 92 ms - 0 KB memory