#pragma once

// #include <SDL/SDL.h>
#include <GL/glew.h>

#ifndef CLIENT_HPP
#define CLIENT_HPP

namespace Client
{
    class Window
    {
    public:
        Window();
        ~Window();
        static int jopa;
    private:
    };

    int Window::jopa = 123;
}

#endif
