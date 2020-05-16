#include <iostream>
#include <vector>

int main()
{
    int n, ini, fim, somas, somad;
    std::cin >> n;
    std::vector < int > vetor(n);
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i];
    ini = 0;
    fim = n - 1;
    somas = 0;
    somad = 0;
    while(ini <= fim)
    {
        if(vetor[ini] > vetor[fim])
        {
            somas += vetor[ini];
            ini++;
        }
        else
        {
            somas += vetor[fim];
            fim--;
        }
        if(ini > fim)
            break;
        if(vetor[ini] > vetor[fim])
        {
            somad += vetor[ini];
            ini++;
        }
        else
        {
            somad += vetor[fim];
            fim--;
        }
    }
    std::cout << somas << ' ' << somad << std::endl;
    return 0;
}