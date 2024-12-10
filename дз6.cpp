#include <SFML/Graphics.hpp>

int main() {
    const int windowWidth = 500;
    const int windowHeight = 500;
    const int cellSize = 50;
    const int numCols = 10;
    const int numRows = 10;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Colored Cells");

    sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
    cell.setOutlineColor(sf::Color::Black);
    cell.setOutlineThickness(1.f);

    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            float x = col * cellSize;
            float y = row * cellSize;
            cell.setPosition(x, y);

            // Алгоритм со сдвигом и закрашиванием через одну клетку вниз
            if (col % 2 != 0 && row % 2 != 0) { // Нечетный столбец и четная строка
                cell.setFillColor(sf::Color::Green);
            }
            else {
                cell.setFillColor(sf::Color::White);
            }
            window.draw(cell);
        }
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        for (int row = 0; row < numRows; ++row) {
            for (int col = 0; col < numCols; ++col) {
                float x = col * cellSize;
                float y = row * cellSize;
                cell.setPosition(x, y);
                if (col % 2 != 0 && row % 2 != 0) {
                    cell.setFillColor(sf::Color::Green);
                }
                else {
                    cell.setFillColor(sf::Color::White);
                }
                window.draw(cell);
            }
        }
        window.display();
    }

    return 0;
}