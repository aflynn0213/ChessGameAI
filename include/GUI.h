void GUI::initializeWindow() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "Chess Game");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
            if (event.type == sf::Event::MouseButtonPressed) handleUserInput(event.mouseButton);
        }
        drawBoard();
        window.display();
    }
}
