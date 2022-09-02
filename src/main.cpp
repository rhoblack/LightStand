#include <iostream>
#include "LightStand.h"

int main()
{
    std::cout << "Hello LightStand!" << std::endl;

    LightStand lightStand;

    while(1)
    {
        lightStand.run();
    }

    return 0;
}