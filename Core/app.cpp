#include <Core/app.h>
#include <iostream>

namespace core
{

void App::sayHelloWorld()
{
    if (m_isHelloAgain)
    {
        std::cout << "Hello World! Again" << std::endl;
    }
    else
    {
        m_isHelloAgain = true;
        std::cout << "Hello World!" << std::endl;
    }
}

} //namespace core

