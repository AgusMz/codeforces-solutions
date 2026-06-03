#include <iostream>     // std::cout, std::cin
#include <string>       // std::string
#include <cctype>       // std::tolower


bool isVowel(char c)
{
    char lower_c = std::tolower(c);
    return (lower_c == 'a' || lower_c == 'o' || lower_c == 'y' || 
            lower_c == 'e' || lower_c == 'u' || lower_c == 'i');
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    
    if (std::cin >> s) {
        std::string ans = "";

        int n = static_cast<int>(s.length());
        for (int i = 0; i < n; i++) {
            if (!isVowel(s[i])) {
                ans += '.';
                ans += static_cast<char>(std::tolower(s[i]));
            }
        }

        std::cout << ans << "\n";
    }

    return 0;
}

