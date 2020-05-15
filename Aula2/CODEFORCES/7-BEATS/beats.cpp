#include <iostream>
#include <vector>
#include <string>

int main()
{
    int possivel;
    char elemento;
    std::string resp = "YES";
    std::vector < int > contadores(10);
    std::cin >> possivel;
    possivel *= 2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> elemento;
            if (elemento != '.')
            {
                contadores[elemento-48]++;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        if (contadores[i] > possivel)
            resp = "NO";
    std::cout << resp << std::endl;
    return 0;
}
