#include "todolist.cpp"
#include <iostream>

class window {
    sf::RenderWindow win;
    sf::Font font;

    public:
    list todolist;
    window(int w = 1000, int h = 700, const std::string& _title = "ToDo") :
        win(sf::VideoMode(w, h), _title, sf::Style::Close){
        font.loadFromFile("Raleway.ttf");
    }
    void run() {
        while (win.isOpen()) {
            handleEvents();
            render();
        }

    }
    void handleEvents() {
        sf::Event ev;
        while (win.pollEvent(ev)) {
            if (ev.type == sf::Event::Closed) {
                win.close();
            }

            //more stuff here
        }
    }
    void render() {
        win.clear(sf::Color::White);
        displayTasks();
        displayTitle();
        win.display();
    }
    void displayTitle() {
        sf::Text text("Simple To-Do List", font);
        text.setStyle(sf::Text::Bold);
        text.setCharacterSize(60);
        text.setFillColor(sf::Color::Black);
        sf::FloatRect textbounds = text.getLocalBounds();
        text.setOrigin(textbounds.left + textbounds.width/2.0f, textbounds.top + textbounds.height/2.0f);
        text.setPosition(500, 55);
        win.draw(text);
    }
    void displayTasks() {
        for (int i = 0; i < todolist.getTasks().size(); i++) {
            if (todolist.getTasks()[i].getComplete() == 1) {
                continue;
            }
            task& t = todolist.getTasks()[i];
            //making text for task and task deadlines
            sf::Text title(todolist.getTasks()[i].getTitle(), font);
            sf::Text deadline("Due by " + std::to_string(todolist.getTasks()[i].getDeadline()), font);
            deadline.setCharacterSize(15);
            deadline.setFillColor(sf::Color::Black);
            deadline.setPosition(100, (i * 60) + 135);
            title.setCharacterSize(30);
            title.setFillColor(sf::Color::Black);
            title.setPosition(100, (i * 60) + 100);
            t.s_complete.setPosition(50, (i * 60) + 115);
            t.s_delete.setPosition(900, (i * 60) + 115);
            win.draw(title);
            win.draw(deadline);
            t.drawCom(win);
            t.drawDel(win);
        }
    }

};
