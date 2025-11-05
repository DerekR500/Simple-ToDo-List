//
// Created by Derek on 11/5/2025.
//

#ifndef TODO_TASK_H
#define TODO_TASK_H
#include <string>


class task {
    std::string title;
    int deadline;
    bool complete;
    public:
    task(std::string _title, int _deadline, bool _complete);
    std::string getTitle();
    void setTitle(std::string newTitle);
    int getDeadline();
    void setDeadline(int newDeadline);
    bool getComplete();
    void setComplete(bool newComplete);
};


#endif //TODO_TASK_H