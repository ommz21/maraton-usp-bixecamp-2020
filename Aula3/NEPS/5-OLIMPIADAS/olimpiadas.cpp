#include <iostream>
#include <vector>
#include <algorithm>

struct medal
{
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
};

bool compa(std::pair < int, medal > a, std::pair < int, medal > b)
{
    if(a.second.ouro != b.second.ouro)
        return a.second.ouro > b.second.ouro;
    
    if(a.second.prata != b.second.prata)
        return a.second.prata > b.second.prata;
    
    if(a.second.bronze != b.second.bronze)
        return a.second.bronze > b.second.bronze;

    return a.first < b.first;
}

int main()
{
    int paises, modal, ouro, prata, bronze;
    std::cin >> paises >> modal;
    std::vector < std::pair < int, medal > > vetor(paises);
    for (int i = 0; i < paises; i++)
        vetor[i].first = i+1;
    for (int i = 0; i < modal; i++)
    {
        std::cin >> ouro >> prata >> bronze;
        vetor[ouro-1].second.ouro++;
        vetor[prata-1].second.prata++;
        vetor[bronze-1].second.bronze++;
    }
    std::sort(vetor.begin(), vetor.end(), compa);
    for (int i = 0; i < paises; i++)
    {
        std::cout << vetor[i].first;
        if(i != paises -1)
            std::cout << ' ';
        else
            std::cout << std::endl;
    }
    return 0;
}