#pragma once

// Classes are useful for storing data and functions together in objects, as part of object-oriented programming.
// Classes are defined with the class keyword, followed by the name of the class.
class Shape
{
	// Public members are accessible from outside the class.
	public:
		Shape(float width, float height);
		~Shape();
		// These are function declarations. They are useful for declaring functions defined in Source files.
		float getWidth();	
		float getHeight();

	// Private members are only accessible from within the class.
	private:
		// These are member variables. They are useful for storing data for specific instances of a class, called objects.
		float width;
		float height;
};

