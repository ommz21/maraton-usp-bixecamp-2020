#include <iostream>
#include <string>
#include <algorithm>

int main() 
{
    std::string s;
    std::cin >> s;
    int cont = 0;
    int len = s.length();
    int seven = count (s.begin(), s.end(), '4');
    int four = count (s.begin(), s.end(), '7');
    if ((four + seven == 4||four + seven == 7))
	    std::cout << "YES";
    else
        std::cout << "NO";
	return 0;
}