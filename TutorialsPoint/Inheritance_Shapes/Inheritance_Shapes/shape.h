#pragma once

class Shape
{
	public:
		Shape(void);
		~Shape(void);
		void setWidth(int w);
		void setHeight(int h);

	protected:
		int width;
		int height;
};
