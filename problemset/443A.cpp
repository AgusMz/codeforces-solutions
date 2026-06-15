#include <iostream>     // std::cout, std::cin
#include <string>       // std::string
#include <set>          // std::set

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;

    if (std::getline(std::cin, s)) {
        std::set<char> english_letters;

        for (char& c : s) {
            if (c >= 97 && c <= 122) {
                english_letters.insert(c);
            }
        }

        std::cout << english_letters.size() << "\n";
    }

    return 0;
}

// solved - 16/06/2026 - 31 ms - 0 KB memory