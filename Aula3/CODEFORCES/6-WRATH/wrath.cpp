#include <iostream>
#include <vector>

int main()
{
    int n, l, vivos, mortes;
    std::cin >> n;
    std::vector < int > vetor(n);
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i];
    vivos = 0;
    mortes = n;
    for (int i = n-1; i >= 0; i--)
    {
        if(i < mortes)
            vivos++;
        mortes = std::min(mortes, i - vetor[i]);
    }
    std::cout << vivos << std::endl;
    return 0;
}