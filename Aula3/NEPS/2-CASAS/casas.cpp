#include <iostream>
#include <vector>

int main()
{
    int n, ini, fim, soma, parcial;
    std::cin >> n;
    std::vector < int > vetor(n);
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i];
    std::cin >> soma;
    parcial = 0;
    ini = 0;
    fim = n - 1;
    while (parcial != soma)
    {
        parcial = vetor[ini] + vetor[fim];
        if (parcial > soma)
            fim--;
        if (parcial < soma)
            ini++;
    }
    std::cout << vetor[ini] << ' ' << vetor[fim] << std::endl;
    return 0;
}