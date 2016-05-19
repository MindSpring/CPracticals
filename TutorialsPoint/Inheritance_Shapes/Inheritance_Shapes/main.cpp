// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "rectangle.h"

using namespace std;


// Derived class
//class Rectangle: public Shape
//{
//   public:
//      int getArea()
//      { 
//         return (width * height); 
//      }
//};


int main()
{
   Rectangle rectangle;
   int area;
 
   rectangle.setWidth(5);
   rectangle.setHeight(7);

   area = rectangle.getArea();

   // Print the area of the object.
   cout << "Total area: " << area << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << rectangle.getCost(area) << endl;

   system("pause");
   return 0;
}

