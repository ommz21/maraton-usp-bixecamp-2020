#include <iostream>
#include <vector>

int main()
{
    int n, soma, max;
    std::cin >> n;
    std::vector < std::vector < int > > matriz(n);
    std::vector < int > somal;
    std::vector < int > somac;
    somal.resize(n, 0);
    somac.resize(n, 0);
    for (int i = 0; i < n; i++)
        matriz[i].resize(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
            somal[i] += matriz[i][j];
            somac[j] += matriz[i][j];
        }
    max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            soma = somal[i] + somac[j] - 2 * matriz[i][j];
            if (soma > max)
                max = soma;
        }
    std::cout << max << std::endl;
    return 0;
}