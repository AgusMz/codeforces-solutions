#include <iostream>     // std::cout, std::cin
#include <set>          // std::set

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int s; // shoes

    std::set<int> diff_shoes;

    for (int i = 0; i < 4; i++) {
      std::cin >> s;
      diff_shoes.insert(s);
    }

    std::cout << 4 - diff_shoes.size() << "\n";

    return 0;
}

// solved - 10/06/2026 - 92 ms - 100 KB memory