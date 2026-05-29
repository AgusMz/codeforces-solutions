#include <iostream>
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n, m, a;

    if (std::cin >> n >> m >> a) {
        ll total_flagstones_x = 0, total_flagstones_y = 0;        

        if (n % a == 0) {
            total_flagstones_x += n / a;
        } else if (n % a > 0) {
            total_flagstones_x += n / a + 1;
        }

        if (m % a == 0) {
            total_flagstones_y += m / a;
        } else if (m % a > 0) {
            total_flagstones_y += m / a + 1;
        }

        std::cout << total_flagstones_x * total_flagstones_y << "\n";
    }

    return 0;
}

// solved - 29/05/2026 - 31 ms - 0 KB memory