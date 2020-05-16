#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, l;
    double raio;
    std::cin >> n >> l;
    std::vector < int > vetor(n), rel(n);
    for (int i = 0; i < n; i++)
        std::cin >> vetor[i];
    std::sort(vetor.begin(), vetor.end());
    if(n != 1)
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                rel[i] = abs(vetor[i-1] - vetor[i]);
            else if (i == 0)
                rel[i] = abs(vetor[i+1] - vetor[i]);
            else
                rel[i] = std::max(abs(vetor[i-1] - vetor[i]), abs(vetor[i+1] - vetor[i]));
        }
    else
        rel[0] = 1;
    std::sort(rel.begin(), rel.end());
    raio = std::max(((double)(rel[n-1]) / 2.), ((double)(vetor[0]) - 0.));
    raio = std::max(raio, (double)l - (double)(vetor[n-1]));
    printf("%.10lf\n", raio);
    return 0;
}