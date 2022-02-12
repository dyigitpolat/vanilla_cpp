#include "demo_menu.hpp"

#include <iostream> 

void hello_world()
{
    std::cout << "42.\n";
}

int main()
{
    //-----------------------------------------//
    std::cout << "- - - - - - - - - - - - - -\n";
    std::cout << "- - - - - - - - - - - - - -\n";
    std::cout << "-         Welcome!        -\n";
    std::cout << "  Demo Program Entry Point \n";
    std::cout << "- - - - - - - - - - - - - -\n";
    std::cout << "- - - - - - - - - - - - - -\n";
    //-----------------------------------------//

    DemoMenu main_menu("MAIN MENU");
    main_menu.add_menu_item({hello_world, "Hello World!"});
    main_menu.show();

    return 0;
}