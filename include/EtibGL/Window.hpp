#pragma once
#include "../EtibGL.hpp"
#include "Events.hpp"

namespace etib {
    class Window {
        public:
            Window(int width, int height, const char* title = "EtibGL", bool fullscreen = false);
            ~Window();

            void init();
            void pollEvent();
            void draw();
            void clear();
            void close();
            void display();

            int isOpened() const;
            const char *getTitle() const;
            int getWidth() const;
            int getHeight() const;
        private:
            GLFWwindow* _window;
            int _width;
            int _height;
            const char* _title;
            bool _fullscreen;
        protected:
    };
};
