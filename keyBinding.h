/*
 *  keyBinding.h
 *  cpPong
 *
 *  Created by Simon Rouger on 25/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

enum inputType {
	MouseInput, 
	KeyboardInput,
	JoystickInput
}

struct Keys {
	inputType myInputType;
	sf::Event::EventType myEvent;
	sf::Mouse::Button myMouseButton;
	sf::Key::Code myKeyCode;
}

