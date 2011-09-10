/*
 *  keyBinding.cpp
 *  cpPong
 *
 *  Created by Simon Rouger on 25/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */
#include "keyBinding.h"

sf::map<std::string, myKeys> Keys;

myKeys key;

//bind left mouse button to move left
key.myInputType= MouseInput;
key.myEventType= sf::Event::MouseButtonPressed;
key.myMouseButton= sf::Mouse::Left;
Keys["MouseLeft"]= key;

//bind right mouse button to move right
key.myInputType= MouseInput;
key.myEventType= sf::Event::MouseButtonPressed;
key.myMouseButton= sf::Mouse::Right;
Keys["MouseRight"]= key;

//bind "q" key to move left (1st player)
key.myInputType= KeyboardInput;
key.myEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Key::Q;
Keys["1QKeyCode"]= key;

//bind "w" key to move right (1st player)
key.myInputType= KeyboardInput;
key.myEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Key::W;
Keys["1WKeyCode"];

//bind "o" key to move left (2nd player)
key.myInputType= KeyboarInput;
key.myEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Key::O;
Keys["2OKeyCode"];

//bind "p" key to move right (2nd player)
key.myInputType= KeyboardInput;
key.MyEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Key::P;
Keys["2PKeyCode"];

//bind left joytick button to move left
key.myInputType= JoystickInput;
key.myEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Joystick::Left;
Keys["LeftJoystick"];

//bind right joystick button to move right
key.myInputType= JoystickInput;
key.myEventType= sf::Event::KeyPressed;
key.myKeyCode= sf::Joystick::Right;
Keys["RightJoystick"];

//bind left move (abs X) on Joystick
/*key.myInputType= JoystickInput;
key.myEventType= sf::Event::Axis;
key.myKeyCode= sf::Joystick::

//bind right joystick move (abs X) on Joystick
*/

bool PlayerEvent (MyKeys k, Event e) {
	//Mouse Event
	if (k.myInputType== MouseInput && k.myEventType== e.Type && k.myMouseButton== e.MouseButton.Button)
		return(true);
	
	//Keyboard Event
	if (k.myInputType== KeyboardInput && k.myEventType== e.Type && k.myKeyCode== e.Key.Code)
		return(true);
	
	//Joystick Event
	if (k.myInputType== JoyStickInput && k.myEventType== e.Type && k.myKeyCode== e.JoyButton.Button)
		return(true);
	
	//if other Event done
	else
		return(false);
}
