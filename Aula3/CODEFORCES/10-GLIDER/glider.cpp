#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    long int n, h, maxi, dist, altura, inicial;
    scanf("%d %d", &n, &h);
    std::vector < std::pair < long int, long int > > pares(n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &pares[i].first, &pares[i].second);
    std::sort(pares.begin(), pares.end());
    inicial = 0;
    altura = h;
    dist = pares[inicial].second - pares[inicial].first + altura;
    maxi = dist;
    for (int i = 1; i < n; i++)
    {
        altura -= (pares[i].first - pares[i-1].second);
        while(altura <= 0)
        {
            inicial++;
            altura += (pares[inicial].first - pares[inicial-1].second);
        }
        dist = pares[i].second - pares[inicial].first + altura;
        maxi = std::max(dist, maxi);
    }
    printf("%d\n", maxi);
    return 0;
}