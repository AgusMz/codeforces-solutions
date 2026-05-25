#include <iostream>
#include <set>

void solution(const std::string& uname)
{
    std::set<char> dist_char;

    for (char c : uname) {
        dist_char.insert(c);
    }

    if (dist_char.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!\n";
    } else {
        std::cout << "IGNORE HIM!\n";
    }

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string uname;
    if (std::cin >> uname) {
        solution(uname);
    }
}

// solved - 26/05/2026 - 124 ms - 100 KB memory