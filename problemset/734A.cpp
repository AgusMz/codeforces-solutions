#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    
    std::string s;

    if (std::cin >> n >> s) {
        int anton_wins = 0;
        int danik_wins = 0;
        
        for (char c : s) {
            if (c == 'A') anton_wins++;
            else if (c == 'D') danik_wins++;
        }

        if (anton_wins < danik_wins)        std::cout << "Danik\n";
        else if (anton_wins > danik_wins)   std::cout << "Anton\n";
        else                                std::cout << "Friendship\n";
    }

    return 0;
}

// solved - 05/06/2026 - 31 ms - 0 KB memory