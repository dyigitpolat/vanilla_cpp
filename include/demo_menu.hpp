#pragma once

//std headers
#include <vector> //std::vector
#include <string> //std::string

//user headers
#include "demo.hpp"

class DemoMenu
{
private:
    std::vector<Demo> m_demos;
    std::string m_title;

public:
    DemoMenu(const std::string &title);

    void add_menu_item(const Demo& demo);
    void show() const;

private:
    void handle_stdin_error() const;
    void print_menu() const;
    void print_title() const;
};