#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    unsigned int n, k;
    double div;
    std::cin >> n >> k;
    std::vector < unsigned int > entrada(n);
    std::vector < double > saida;
    for (int i = 0; i < n; i++)
        std::cin >> entrada[i];
    std::sort(entrada.begin(), entrada.end());
    for (int i = 0; i < n; i++)
    {
        if(!std::binary_search(saida.begin(), saida.end(), (double)(entrada[i]) / (double)(k)))
            saida.push_back((double)entrada[i]);
    }
    std::cout << saida.size() << std::endl;
    return 0;
}
