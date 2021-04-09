#include <iostream>

int main()
{
    
    int b{};
    std::cin >> b;

    for(int count{ 0 }; count < b; ++count )
    {
        int c{};
        int d{};
        std::cin >> c >> d;
        std::cout << c + d << '\n';
    }


}