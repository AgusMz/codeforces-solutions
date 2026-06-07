#include <iostream>     // std::cout, std::cin

#define ll long long

ll get_sum_even(ll n)
{
    if (n % 2 != 0) n--;
    ll x = n / 2;

    return x * (x + 1);
}

ll get_sum_odd(const ll& n)
{
    ll x = (n + 1) / 2;

    return x * x;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n;
    
    if (std::cin >> n) {
        ll sum_even = get_sum_even(n);
        ll sum_odd  = get_sum_odd(n);

        ll ans = sum_even - sum_odd;

        std::cout << ans << "\n";
    }

    return 0;
}

// solved - 07/06/2026 - 46 ms - 100 KB memory