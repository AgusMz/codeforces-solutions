#include <iostream>     // std::cout, std::cin

#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n, k;

    if (std::cin >> n >> k) {
        const ll get_odd_numbers  = (n+1)/2;

        if (k <= get_odd_numbers) {
            std::cout << (k * 2) - 1 << "\n";
        } else if (k > get_odd_numbers) {
            std::cout << (k - get_odd_numbers) * 2 << "\n";
        } 
    }

    return 0;
}

// solved - 09/06/2026 - 92 ms - 0 KB memory