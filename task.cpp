#include "task.h"

task::task() {
    title = "deez";
    deadline = 00000000;
    complete = false;
}
task::task(std::string _title, int _deadline, bool _complete) {
    title = _title;
    deadline = _deadline;
    complete = _complete;
}
std::string task::getTitle() {
    return title;
}
void task::setTitle(std::string newTitle) {
        title = newTitle;
    }
int task::getDeadline() {
        return deadline;
    }
void task::setDeadline(int newDeadline) {
     deadline = newDeadline;
}
bool task::getComplete() {
    return complete;
}
void task::setComplete(bool newComplete) {
    complete = newComplete;
}