#include "window.cpp"


int main() {
    window win;
    task yuh;
    task whoo;
    task nope("Testing", 12182025, false,"check.png", "trash.jpg" );
    task dog("Take out the dog for a walk", 12252025, false, "check.png", "trash.jpg");
    win.todolist.addTask(yuh);
    win.todolist.addTask(nope);
    win.todolist.addTask(whoo);
    win.todolist.addTask(dog);
    win.run();

    return 0;
}