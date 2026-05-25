#include <ios>
#include <iostream>

void solution(int w)
{
    if (w % 2 == 0 && w != 2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w; // weight (kg)
    std::cin >> w;

    solution(w);
}

// solved - 23/05/2026 - 62 ms - 100 KB memory