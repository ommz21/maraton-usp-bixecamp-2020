#include <iostream>

int main()
{
    int linha, n, comeco;
    comeco = 1;
    std::cin >> linha >> n;
    for (int i = 1; i <= n; i++, comeco++)
    {
        std::cout << comeco;
        if (i % linha == 0)
            std::cout << std::endl;
        else
            std::cout << " ";
    }
    return 0;
}