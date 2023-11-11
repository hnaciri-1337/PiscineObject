#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>

int     main()
{
    std::list<int> l;

    for (int i = 2; i < 7; i++)
        l.push_back(i);

    std::list<int>::iterator it;

    for (int i = 0; i < 10; i++)
    {
        try
        {
            it = easyfind(l, i);
            std::cout << *it << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}