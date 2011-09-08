
////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <iostream>
#include "keyBinding.h"
#include "keyBinding.c"
#include "Actions.h"
#include "Actions.c"

////////////////////////////////////////////////////////////
/// Entry point of application
///
/// \return Application exit code
///
////////////////////////////////////////////////////////////
int main()
{
    // Create main window
    sf::RenderWindow App(sf::VideoMode(640, 480), "SFML Graphics", sf::Style::Close | sf::Style::Titlebar);
	
	//limit to 60fps 
	app.UseVerticalSync(true);
	
    // Start game loop
    while (App.IsOpened())
    {
        // Process events
        sf::Event Event;
        while (App.GetEvent(Event))
        {
			
			if (PlayerEvent(Keys["MouseLeft"] || Keys["1QKeyCode"] || Keys["2OKeyCode"] || Keys["LeftJoystick"], Event) {
				MoveLeft();
			}
				
			if (PlayerEvent(Keys["MouseRight"] || Keys["1WKeyCode"] || Keys["2PKeyCode"] || Keys["RightJoystick"], Event) {
				MoveRight();
			}
			
            // Close window : exit
            if (Event.Type == sf::Event::Closed)
                App.Close();
        }

        // Clear screen
        App.Clear();

        // Draw apredefined shape
        //App.Draw(sf::Shape::Circle(200, 200, 100, sf::Color::Yellow, 10, sf::Color::Blue));

        // Finally, display the rendered frame on screen
        App.Display();
    }

    return EXIT_SUCCESS;
}
