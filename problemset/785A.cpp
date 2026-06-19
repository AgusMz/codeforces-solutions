#include <iostream>     // std::cout, std::cin
#include <string>       // std::string

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    if (std::cin >> n) {
        std::string s;

        int faces = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> s;

            if      (s == "Tetrahedron")  faces += 4;
            else if (s == "Cube")         faces += 6;
            else if (s == "Octahedron")   faces += 8;
            else if (s == "Dodecahedron") faces += 12;
            else if (s == "Icosahedron")  faces += 20;
        }

        std::cout << faces << "\n";
    }

    return 0;
}

// solved - 19/06/2026 - 78 ms - 100 KB memory