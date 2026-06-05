#include <iostream>     // std::cout, std::cin
#include <string>       // std:string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; // number of children in the queue
    int t; // time after which the queue will transform into the arrangement

    std::string s = ""; // boy or girl

    if (std::cin >> n >> t) {
        for (int i = 0; i < n; i++) {
            char c;
            std::cin >> c;
            s += c;
        }

        while (t--) {
            for (int i = 0; i < n-1; i++) {
                if (s[i] == 'B' && s[i+1] == 'G') {
                    s[i] = 'G';
                    s[i+1] = 'B';
                    i++;
                }
            }
        }

        std::cout << s << "\n";
    }

    return 0;
}

// solved - 05/06/2026 - 92 ms - 0 KB memory