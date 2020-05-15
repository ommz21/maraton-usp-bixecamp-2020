#include <iostream>
#include <vector>

struct botas
{
    int contesq = 0;
    int contdir = 0;
};


int main()
{
    int n, num, resp = 0;
    char l;
    std::cin >> n;
    std::vector < botas > colecao(61);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num >> l;
        if (l == 'E')
            colecao[num].contesq++;
        else
            colecao[num].contdir++; 
    }
    for(auto x : colecao)
        resp += std::min(x.contdir, x.contesq);
    std::cout << resp << std::endl;
    return 0;
}
