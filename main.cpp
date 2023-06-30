#include <iostream>
#include "EtibGL/Window.hpp"

int main(void)
{
    etib::Window window(800, 600);

    std::cout << "Width of the window: " << window.getWidth() << std::endl;
    std::cout << "Height of the window: " << window.getHeight() << std::endl;
    std::cout << "Title of the window: " << window.getTitle() << std::endl;
    std::cout << "Should the window close: " <<  (window.isOpened() ?  "Yes" : "No") << std::endl;

    while (window.isOpened() == 0) {

        window.clear();
        window.display();
    }
    return 0;
}
