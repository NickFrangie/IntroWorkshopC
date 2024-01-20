#include "Shape.h"

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