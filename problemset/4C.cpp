#include <iostream>         // std::cout, std::cin
#include <string>           // std::string
#include <unordered_map>    // std::unordered_map

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {
        std::unordered_map<std::string, int> database;   

        for (int i = 0; i < n; i++) {
            std::string username;
            std::cin >> username;

            auto& count = database[username];

            if (count == 0) {
                std::cout << "OK\n";
                count = 1;
            } else {
                std::cout << username << count << "\n";
                count++;
            }
        }
    }

    return 0;
}

// solved - 21/06/2026 - 124 ms - 0 KB memory