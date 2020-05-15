#include <iostream>
#include <vector>

std::vector < unsigned long long int > fat;

struct contadores
{
    int zeros = 0;
    int ums = 0;
};

unsigned long long int fatorial(int n)
{
    if (fat[n] != 0)
        return fat[n];
    fat[n] = n * fatorial(n-1);
    return fat[n];  
}

unsigned long long int NCR(int n, int r)
{
    if (r == 0) return 1;

    /*
     Extra computation saving for large R,
     using property:
     N choose R = N choose (N-R)
    */
    if (r > n / 2) return NCR(n, n - r); 

    unsigned long long int res = 1; 

    for (int k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }

    return res;
}

int combinacoes (int n, int k)
{
    return fat[n] / (fat[k] * fat[n-k]);
}

int main()
{
    int n, m;
    unsigned long long int retangulos;
    fat.resize(21, 0);
    fat[0] = 1;
    fatorial(20);
    std::cin >> n >> m;
    std::vector < std::vector < int > > matriz(n);
    std::vector < contadores > linhas(n);
    std::vector < contadores > colunas(m);
    for (int i = 0; i < n; i++)
        matriz[i].resize(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matriz[i][j];
            if (matriz[i][j] == 1)
            {
                linhas[i].ums++;
                colunas[j].ums++;
            }
            else
            {
                linhas[i].zeros++;
                colunas[j].zeros++;
            }
        }
    }
    retangulos = n * m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= linhas[i].zeros; j++)
            retangulos += NCR(linhas[i].zeros, j);
        for (int j = 2; j <= linhas[i].ums; j++)
            retangulos += NCR(linhas[i].ums, j);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 2; j <= colunas[i].zeros; j++)
            retangulos += NCR(colunas[i].zeros, j);
        for (int j = 2; j <= colunas[i].ums; j++)
            retangulos += NCR(colunas[i].ums, j);
    }
    std::cout << retangulos << std::endl;
    return 0;
}