#include <iostream>     // std::cout, std::cin

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;      // number of dollars in the bank

    if (std::cin >> n) {

        int arr[] = {1, 5, 10, 20, 100}; 
        
        int dollars = 0;

        int i = 4;
        while (n > 0) {
            if (n >= arr[i]) {
                if (i == 0) {
                    dollars += n;
                    break;
                } else {
                    dollars += n / arr[i];
                    n %= arr[i];
                }
            } else {
                i--;
            }
        }

        std::cout << dollars << "\n";
    }

    return 0;
}

// solved - 15/06/2026 - 31 ms - 0 KB memory