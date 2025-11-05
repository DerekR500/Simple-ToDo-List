#include "SFML/Graphics.hpp"

class window {
    sf::RenderWindow win;
    public:
    window(int w, int h, std::string _title) :
        win(sf::VideoMode(w, h), _title, sf::Style::Close){
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
        win.clear();
        win.display();
    }
};
