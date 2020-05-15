#include <iostream>
#include <vector>

int main()
{
    int n, q, li, lf, ci, cf, cenouras = 0;
    std::cin >> n;
    std::vector < std::vector < int > > plant(n);
    for (int i = 0; i < n; i++)
        plant[i].resize(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> plant[i][j];
    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        std::cin >> li >> ci >> lf >> cf;
        for (int j = li - 1; j < lf; j++)
            for (int k = ci - 1; k < cf; k++)
            {
                cenouras += plant[j][k];
                plant[j][k] = 0;
            }
    }
    std::cout << cenouras << std::endl;
    return 0;
}