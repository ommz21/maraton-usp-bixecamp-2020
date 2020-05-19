#include <iostream>
#include <vector>
#include <string>

int checa(std::string palavra, int k, int n, char x)
{
    int ret, fim, cont;
    ret = 0;
    cont = 0;
    fim = 0;
    for (int ini = 0; ini < n; ini++)
    {
        while(fim < n && (cont < k || palavra[fim] != x))
        {
            if(palavra[fim] == x)
                cont++;
            fim++;
        }
        if(palavra[ini] == x)
            cont--;
        if (ret < fim - ini)
            ret = fim - ini;
    }
    return ret;
}

int main()
{
    int n, k, resp;
    std::string palavra;
    std::cin >> n >> k;
    std::cin >> palavra;
    resp = std::max(checa(palavra, k, n, 'a'), checa(palavra, k, n, 'b'));
    std::cout << resp << std::endl;
    return 0;
}
