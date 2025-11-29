#include "SFML/Graphics.hpp"
#include "todolist.cpp"

class window {
    sf::RenderWindow win;
    sf::Font font;
    list todolist;

    public:
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
        //figure out how to display tasks
        win.display();
    }
    void displayTasks() {
        for (int i = 0; i < todolist.getTasks().size(); i++) {
            sf::Text text(todolist.getTasks()[i].getTitle(), font);
            text.setCharacterSize(50);
            text.setFillColor(sf::Color::Black);
            text.setPosition(100, (i * 50) + 300);
            win.draw(text);
        }
    }
    list getList() {
        return todolist;
    }
};
