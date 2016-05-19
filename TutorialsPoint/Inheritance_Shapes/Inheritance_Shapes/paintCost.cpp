#include "StdAfx.h"
#include "paintCost.h"

PaintCost::PaintCost(void)
{
}

PaintCost::~PaintCost(void)
{
}

int PaintCost::getCost(int area)
{
	return area * 70;
}