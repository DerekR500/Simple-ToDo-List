#include <vector>
#include "task.h"

class list {
    std::vector<task> tasks;
public:
    void removeTask(task& t) {
        for (int i = 0; i < tasks.size(); i++) {
            if (t.getTitle() == tasks[i].getTitle()) {
                tasks.erase(tasks.begin() + i);
            }
        }
    }

    void addTask(task& t) {
        tasks.push_back(t);
    }

    std::vector<task> getTasks() {
        return tasks;
    }
};