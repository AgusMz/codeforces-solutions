#include <iostream>     // std::cout, std::cin
#include <string>       // std::string
#include <algorithm>    // std::transform
#include <set>          // std::set

void isPanagram(std::string s)
{
    std::set<char> panagram;

    for (char c : s) {
        panagram.insert(c);
    }

    if (panagram.size() == 26) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;              // number of chars in s
    std::string s;      // latin letters

    if (std::cin >> n >> s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        isPanagram(s);
    }

    return 0;
}

// solved - 12/06/2026 - 31 ms - 0 KB memory