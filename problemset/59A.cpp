#include <iostream>     // std::cout, std::cin
#include <string>       // std::string
#include <cctype>       // std::tolower, std::toupper, std::isupper

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    
    if (std::cin >> s) {
        int upper = 0;
        int lower = 0;

        for (char letter : s) {
            if (std::isupper(static_cast<int>(letter))) {
                upper++;
            } else {
                lower++;
            }
        }

        if (lower >= upper) {
            for (char &letter : s) letter = std::tolower(letter); 
        } else {
            for (char &letter:  s) letter = std::toupper(letter);
        }

        std::cout << s << "\n";
    }

    return 0;
}

// solved - 04/06/2026 - 92 ms - 0 KB memory