#include <iostream>
#include "task.h"
#include "window.cpp"

int main() {
    window win(800, 600, "Hello World");
    win.run();
    return 0;
}