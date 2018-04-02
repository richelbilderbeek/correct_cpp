#include <SFML/Graphics.hpp>
#include <chrono>

/// Minimal SFML application that shows a circle for three seconds
int main()
{
  const auto start_time = std::chrono::system_clock::now();

  // create the window
  sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

  // run the program as long as the window is open
  while (window.isOpen())
  {
    // check all the window's events that were triggered since the last iteration of the loop
    /*
    sf::Event event;
    while (window.pollEvent(event))
    {
      // "close requested" event: we close the window
      if (event.type == sf::Event::Closed)
        window.close();
    }
    */
    // clear the window with black color
    window.clear(sf::Color::Black);

    // draw everything here...
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color(100, 250, 50));
    window.draw(shape);

    // end the current frame
    window.display();

    const auto now = std::chrono::system_clock::now();
    if (std::chrono::duration_cast<std::chrono::seconds>(now - start_time).count() > 3) {
      window.close();
    }
  }
}
