# Codeforces Solutions 🚀

This repository contains my solutions to various Codeforces problems, aimed at sharpening my problem-solving skills, algorithmic thinking && mastery of C++.

## Problem Index

| # | Problem | Solution | Key Concept / Takeaway |
|---|----------|----------|------------------------|
| 158A | [Next Round](https://codeforces.com/problemset/problem/158/A) | [Code](.problemset/158A.cpp) | 0-based vs 1-based indexing, strict conditional bounds (`> 0`). |
| 1A | [Theatre Square](https://codeforces.com/problemset/problem/1/A) | [Code](.problemset/1A.cpp) | Preventing *Integer Overflow* using `long long`, ceiling division. |
| 50A | [Domino piling](https://codeforces.com/problemset/problem/50/A) | [Code](.problemset/50A.cpp) | Geometric optimization, reducing logic to mathematical area formulas (`/ 2`). |
| 263A | [Beautiful Matrix](https://codeforces.com/problemset/problem/263/A) | [Code](.problemset/263A.cpp) | Manhattan Distance, signed vs unsigned types (`int` vs `size_t`) with `std::abs`. |
| 112A | [Petya and Strings](https://codeforces.com/problemset/problem/112/A) | [Code](.problemset/112A.cpp) | String manipulation, lexicographical comparison, case-insensitive normalization with `std::tolower()`. |

## Project Structure

Each solution is written in native, standard C++ prioritizing clean code and optimal I/O operations (`std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);`).

## How to Run

To compile and run any solution locally, use a standard C++ compiler (like `g++` or `clang`):

```bash
g++ -O3 solution_name.cpp -o solution
./solution