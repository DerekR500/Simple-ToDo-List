#include <vector>
#include "task.h"

class list {
    std::vector<task> tasks;
    std::vector<task> completedTasks;
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

    //i was passing by copy this whole time
    //that's the only reason this wasn't working, no way.
    std::vector<task>& getTasks() {
        return tasks;
    }
    std::vector<task>& getCompletedTasks() {
        return completedTasks;
    }
};