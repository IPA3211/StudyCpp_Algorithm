#include <iostream>
#include "MyString.h"

int main(void)
{
    MyString s("asd");
    std::cout << s << std::endl;

    s.reserve(100);
    
    std::cout << s << std::endl;

    std::cout << s.getAt(1) << std::endl;
    //s.free();

    std::cout << s.getSize() << std::endl;

    s.reserve(100); 
    s.setAt(20, 'a');

    std::cout << s.getSize() << std::endl;
    std::cout << s.getLength() << std::endl;


    std::cout << s << std::endl;
    std::cout << cus::strlen(s) << std::endl;

}