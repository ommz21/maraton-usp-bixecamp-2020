#include <iostream>
#include <vector>

int main()
{
    int n, soma, novasoma;
    std::cin >> n;
    std::vector < std::vector < int > > quadrado(n);
    for (int i = 0; i < n; i++)
        quadrado[i].resize(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> quadrado[i][j];
    soma = 0;
    novasoma = 0;
    for (int i = 0; i < n; i++)
        soma += quadrado[0][i];
    while(true)
    {    
        for (int i = 1; i < n; i++)
        {
            novasoma = 0;
            for (int j = 0; j < n; j++)
                novasoma += quadrado[i][j];    
            if(soma != novasoma)
                break;
        }
        if(soma != novasoma)
            break;
        for (int i = 0; i < n; i++)
        {
            novasoma = 0;
            for (int j = 0; j < n; j++)
                novasoma += quadrado[j][i];    
            if(soma != novasoma)
                break;
        }
        if(soma != novasoma)
            break;
        novasoma = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                if (i == j)
                    novasoma += quadrado[i][j];    
        }
        if(soma != novasoma)
            break;
        novasoma = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                if (i + j == n - 1)
                    novasoma += quadrado[i][j];
        }
        break;
    }
    if (soma == novasoma)
        std::cout << soma;
    else
        std::cout << -1;
    std::cout << std::endl;
    return 0;
}