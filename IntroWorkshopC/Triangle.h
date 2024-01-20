#pragma once
#include "Shape.h"
class Triangle : public Shape
{
	public:
		Triangle(float width, float height);
		float getArea();
};

