#include <iostream>
#include <vector>

int main()
{
    int n, b, num, dif, cont;
    char resp;
    while (std::cin >> n >> b && (n != 0 || b != 0))
    {
        cont = 0;
        std::vector < int > restante(b);
        std::vector < bool > proximo;
        proximo.resize(b, false);
        if(b == 0)
            resp = 'N';
        else
        {
            resp = 'Y';
            for (int i = 0; i < b; i++)
            {
                std::cin >> restante[i];
            }
            for (int i = 0; i < b; i++)
            {
                num = restante[i];
                for (int j = i+1; j < b; j++)
                {
                    dif = abs(restante[i] - restante[j]);
                    proximo[dif] = true;
                }
            }
            proximo[0] = true;
            for (int i = 0; i < n + 1; i++)
                if (proximo[i])
                    cont++;
        }
        if(cont == n + 1)
            std::cout << "Y";
        else
            std::cout << "N";
        std::cout << std::endl;
    }
    return 0;
}