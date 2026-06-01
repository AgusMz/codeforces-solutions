#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a, b;

    if (std::cin >> a >> b) {
        for (size_t i = 0; i < a.length(); i++) {
            a[i] = std::tolower(a[i]);
            b[i] = std::tolower(b[i]);
        }
        if (a < b) {
            std::cout << "-1\n";
        } else if (a > b) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }
    }

    return 0;
}

// solved - 01/06/2026 - 92 ms - 100 KB memory