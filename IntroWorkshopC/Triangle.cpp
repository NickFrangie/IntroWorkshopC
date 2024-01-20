#include "Triangle.h"

Triangle::Triangle(float width, float height) : Shape(width, height)
{

}

float Triangle::getArea()
{
	return getWidth() * getHeight() / 2;
}