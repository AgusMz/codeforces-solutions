#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::string s;

    if (std::cin >> n >> s) {
        int ans = 0;

        for (int i = 0; i < n-1; i++) {
            if (s[i] == s[i+1]) {
                ans++;
            }
        }

        std::cout << ans << "\n";
    }

    return 0;
}

// solved - 03/06/2026 - 92 ms - 0 KB memory