#include "window.cpp"


int main() {
    window win;
    task yuh;
    task whoo;
    win.getList().addTask(yuh);
    win.getList().addTask(whoo);
    win.run();

    return 0;
}