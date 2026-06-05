#include <iostream>     // std::cout, std::cin
#include <string>       // std::string, std::find

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    
    if (std::cin >> s) {
        std::string ones_team   = "1111111";
        std::string zeros_team  = "0000000";
    
        if (s.find(ones_team) != std::string::npos || s.find(zeros_team) != std::string::npos) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}

// solved - 05/06/2026 - 92 ms - 100 KB memory