#include <iostream>
#include <vector>

#define INF 1000000000

void merge (std::vector < int > &v)
{
    int n = v.size();
    if (n == 1)
        return;
    
    std::vector < int > u1, u2;
    for (int i = 0; i < n/2; i++)
        u1.push_back(v[i]);
    for (int i = n/2; i < n; i++)
        u2.push_back(v[i]);

    merge(u1);
    merge(u2);

    int ini1 = 0;
    int ini2 = 0;

    u1.push_back(INF);
    u2.push_back(INF);

    for (int i = 0; i < n; i++)
    {
        if (u1[ini1] < u2[ini2])
        {
            v[i] = u1[ini1];
            ini1++;
        }
        else
        {
            v[i] = u2[ini2];
            ini2++;
        }
    }
    return;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector < int > vetor(n);
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i];
    merge(vetor);
    for (int i = 0; i < n; i++)
    {
        std::cout << vetor[i];
        if (i != n - 1)
            std::cout << ' ';
        else
            std::cout << std::endl;
    }
    return 0;
}