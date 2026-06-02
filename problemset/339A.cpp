#include <iostream>     // std::cout, std::cin
#include <string>       // std::string
#include <algorithm>    // std::sort

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;

    if (std::cin >> s) {
        std::string tmp;

        int n = static_cast<int>(s.length());
        for (size_t i = 0; i < n; i+=2) {
            tmp += s[i];
        }

        std::sort(tmp.begin(), tmp.end());

        int m = static_cast<int>(tmp.length());
        for (int i = 0; i < m; i++) {
            if (i == m-1) { 
                std::cout << tmp[i] << "\n";
            } else {
                std::cout << tmp[i] << "+";
            }
        }
    }

    return 0;
}

// solved - 02/06/2026 - 92 ms - 0 KB memory