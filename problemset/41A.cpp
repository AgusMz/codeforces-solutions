#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

std::string translation(const std::string& s)
{
    std::string translated = "";

    int n = static_cast<int>(s.length());
    for (int i = n-1; i >= 0; i--) {
        translated += s[i];
    }

    return translated;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::string t;

    if (std::cin >> s >> t) {
        if (t == translation(s)) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}

// solved - 05/06/2026 - 46 ms - 0 KB memory