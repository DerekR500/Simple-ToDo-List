#include "task.h"
#include <iostream>

task::task() {
    title = "deez";
    deadline = 00000000;
    complete = false;
    deleted = false;
    if (!t_complete.loadFromFile("check.png")) {
        return;
    }
    if (!t_delete.loadFromFile("trash.jpg")) {
        return;
    }
    s_complete.setTexture(t_complete);
    s_delete.setTexture(t_delete);
}
task::task(std::string _title, int _deadline, bool _complete, bool _deleted, std::string file_path1, std::string file_path2) {
    title = _title;
    deadline = _deadline;
    complete = _complete;
    deleted = _deleted;
    if (!t_complete.loadFromFile(file_path1)) {
        return;
    }
    if (!t_delete.loadFromFile(file_path2)) {
        return;
    }
    s_complete.setTexture(t_complete);
    s_delete.setTexture(t_delete);
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
bool task::getDeleted() {
    return deleted;
}
void task::setDeleted(bool newDeleted) {
    deleted = newDeleted;
}
void task::setComPosition(float x, float y) {
    s_complete.setPosition(x, y);
}

void task::setDelPosition(float x, float y) {
    s_delete.setPosition(x, y);
}
void task::drawCom(sf::RenderWindow& win) {
    win.draw(s_complete);
}
void task::drawDel(sf::RenderWindow& win) {
    win.draw(s_delete);
}