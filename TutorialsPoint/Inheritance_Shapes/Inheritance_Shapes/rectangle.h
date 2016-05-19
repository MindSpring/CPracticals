#pragma once

#include "shape.h"
#include "paintCost.h"

class Rectangle : public Shape, public PaintCost
{
	public:
		Rectangle(void);
		~Rectangle(void);

		int getArea();
};
