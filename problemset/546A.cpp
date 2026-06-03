#include <iostream>     // std::cout, std::cin
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll w; // bananas
    ll k; // k dollars for the first banana, 2k...
    ll n; // dollars

    if (std::cin >> k >> n >> w) {
        ll cost = (w * (w + 1) / 2) * k; // Gauss's formula n(n+1)/2

        if (cost - n <= 0) {
            std::cout << 0 << "\n";
        } else {
            std::cout << cost - n << "\n";
        }
    }

    return 0;
}

// solved - 03/06/2026 - 31 ms - 0 KB memory