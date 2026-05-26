#include <ios>
#include <iostream>

void solution(const std::string& word)
{
    if (word.length() > 10) {
        std::cout << word[0] << word.length()-2 << word[word.length()-1] << "\n";
    } else {
        std::cout << word << "\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while (n--) {
        std::string word;
        std::cin >> word;

        solution(word);
    }
}

// solved - 26/05/2026 - 31 ms - 100 KB memory