
#ifndef TODO_TASK_H
#define TODO_TASK_H
#include <string>
#include "SFML/Graphics.hpp"


class task {
    std::string title;
    int deadline;
    bool complete;

    public:
    sf::Texture t_complete, t_delete;
    sf::Sprite s_complete, s_delete;
    task();
    task(std::string _title, int _deadline, bool _complete, std::string file_path1, std::string file_path2);
    std::string getTitle();
    void setTitle(std::string newTitle);
    int getDeadline();
    void setDeadline(int newDeadline);
    bool getComplete();
    void setComplete(bool newComplete);
    void setComPosition(float x, float y);
    void setDelPosition(float x, float y);
    void drawDel(sf::RenderWindow& win);
    void drawCom(sf::RenderWindow& win);
};


#endif //TODO_TASK_H