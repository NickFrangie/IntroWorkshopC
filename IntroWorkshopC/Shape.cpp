#include "Shape.h"
#include <iostream>

Shape::Shape(float width, float height)
{
	this->width = width;
	this->height = height;
}

Shape::~Shape()
{
	std::cout << "Shape destroyed!" << std::endl;
}

// To define a function declared in a header file, use the function signature followed by the function body.
// The class name and scope resolution operator must be prepended to the function name.
float Shape::getWidth()
{
	return width;
}

float Shape::getHeight()
{
	return height;
}