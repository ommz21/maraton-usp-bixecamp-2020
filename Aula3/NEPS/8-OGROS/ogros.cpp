#include <iostream>
#include <vector>
#include <algorithm>

bool comp (std::pair < int, int > a, std::pair < int, int > b)
{
    return a.first < b.first;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector < std::pair < int, int> > limites(n);
    std::vector < std::pair < int, int > > ogros(m);
    limites[0].first= 0;
    for (int i = 1; i < n; i++)
        std::cin >> limites[i].first;
    for (int i = 0; i < n; i++)
        std::cin >> limites[i].second;
    for (int i = 0; i < m; i++)
    {
        std::cin >> ogros[i].first;
        auto indice = std::upper_bound(limites.begin(), limites.end(), std::make_pair(ogros[i].first, 0), comp);
        indice--;
        ogros[i].second = (indice->second);
    }
    for (int i = 0; i < m; i++)
    {
        std::cout << ogros[i].second;
        if(i != m - 1)
            std::cout << ' ';
        else
            std::cout << std::endl;
    }
    return 0;
}