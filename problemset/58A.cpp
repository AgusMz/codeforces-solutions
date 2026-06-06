#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;

    if (std::cin >> s) {
        std::string target = "hello";
        int pointer = 0;

        for (char c : s) {
            if (c == target[pointer]) pointer++;
            if (pointer == 5) break;
        }
        
        if (pointer == 5) std::cout << "YES\n";
        else std::cout << "NO\n";
        
    }

    return 0;
}

// solved - 06/06/2026 - 46 ms - 0 KB memory