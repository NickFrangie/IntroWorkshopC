#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
	public:
		Rectangle(float width, float height);
		float getArea();
};

