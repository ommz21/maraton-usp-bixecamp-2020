#include <iostream>

int main()
{
    int max, num;
    max = -1;
    while (std::cin >> num && num != 0)
        if (num > max)
            max = num;
    std::cout << max << std::endl;
    return 0;
}
