#include <iostream>     // std::cout, std::cin
#include <string>       // std::string, std::to_string
#include <vector>       // std::vector

std::vector<int> get_lucky_numbers() // in this case, only up to 1000 
{
    std::vector<int> lucky_numbers;

   for (int i = 4; i <= 777; i++) {
       bool ln = true;

       int n = i;

       while (n > 0) {
            int digit = n % 10;

            if (digit != 4 && digit != 7) {
                ln = false;
                break;
            }

            n /= 10;
        }

       if (ln) lucky_numbers.push_back(i);
    }

    return lucky_numbers;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    
    if (std::cin >> n) {
        std::vector<int> lucky_numbers = get_lucky_numbers();

        int len = static_cast<int>(lucky_numbers.size());
        for (int i = 0; i < len; i++) {
            if (n % lucky_numbers[i] == 0) {
                std::cout << "YES\n";
                break;
            } else if (i == len-1 && n % lucky_numbers[i] != 0) {
                std::cout << "NO\n";
            } 
        }
    }

    return 0;
}

// solved - 07/06/2026 - 92 ms - 0 KB memory
