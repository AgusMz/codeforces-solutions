#include <iostream>     // std::cout, std::cin
#include <set>          // std::set

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;      // number of levels of the game.

    if (std::cin >> n) {
        std::set<int> levels;

        int p;      // number of levels that Little X can pass
        std::cin >> p;

        for (int i = 0; i < p; i++) {
            int x;
            std::cin >> x;
            levels.insert(x);
        }

        int q;      // number of levels that Little Y can pass
        std::cin >> q;

        for (int i = 0; i < q; i++) {
            int y;
            std::cin >> y;
            levels.insert(y);
        }

        int levels_passed = static_cast<int>(levels.size());

        if (levels_passed == n) {
            std::cout << "I become the guy.\n";
        } else {
            std::cout << "Oh, my keyboard!\n";
        }
    }

    return 0;
}

// solved - 14/06/2026 - 46 ms - 0 KB memory