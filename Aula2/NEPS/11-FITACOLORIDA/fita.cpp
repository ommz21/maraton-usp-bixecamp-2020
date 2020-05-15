#include <iostream>
#include <vector>

struct referencia
{
    bool preenchido = false;
    std::vector < int > fita;
};

int main()
{
    int n, cont, mini;
    std::cin >> n;
    std::vector < int > entrada(n), saida(n);
    std::vector < referencia > vetorzeros(n);
    for (int i = 0; i < n; i++)
        vetorzeros[i].fita.resize(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> entrada[i];
        if (entrada[i] == 0)
            vetorzeros[i].preenchido = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (entrada[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(j - i) >= 9)
                    vetorzeros[i].fita[j] = 9;
                else
                    vetorzeros[i].fita[j] = abs(j - i);           
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        mini = 9;
        for (int j = 0; j < n; j++)
        {
            if (vetorzeros[j].preenchido == true)
            {
                mini = std::min(mini, vetorzeros[j].fita[i]);
                saida[i] = mini;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << saida[i];
        if (i != n - 1)
            std::cout << ' ';
        else
            std::cout << std::endl;
    }
    return 0;
}