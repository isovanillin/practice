#include <iostream>

int main()
{
    char a{};
    std::cout << "You see a castle. Enter? (Y/N)" << '\n';
    std::cin >> a;

    if (a == 'Y' || a == 'y')
    {
        std::cout << "There are five rooms. Leave? (Y/N)" << '\n'; 
        std::cin >> a; 

        if (a == 'Y' || a == 'y')
        {
            std::cout << "You leave, and never return." << '\n';
        }
        else 
        {
            std::cout << "You see a room. Enter? (Y/N)" << '\n';
            std::cin >> a; 

            if (a == 'Y' || a == 'y')
            {
                std::cout << "You find cash!" << '\n'; 
            }
            else
            {
                std::cout << "You run away, and slip on a banana peel." << '\n';
            }
        }
    }
    else
    {
        std::cout << "You leave, and never return." << '\n';
    }

    return 0; 
}
