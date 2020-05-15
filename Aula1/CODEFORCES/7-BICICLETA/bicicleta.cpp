#include <iostream>

int main()
{
    int n;
    std::pair < int, int > anterior, atual;
    std::cin >> n;
    std::cin >> anterior.first >> anterior.second;
    for (int i = 0; i < n; i++)
        std::cin >> atual.first >> atual.second;
    std::cout << (n-4)/2 << std::endl;
    return 0;
}