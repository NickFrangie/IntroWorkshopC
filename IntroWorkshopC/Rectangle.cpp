#include "Rectangle.h"

// Constructor Chaining is a feature of C++ that allows a constructor to call another constructor in the same or parent class.
Rectangle::Rectangle(float width, float height) : Shape(width, height)
{

}

float Rectangle::getArea()
{
	return getWidth() * getHeight();
}