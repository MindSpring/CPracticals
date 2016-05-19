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
 
   rectangle.setWidth(5);
   rectangle.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << rectangle.getArea() << endl;
   system("pause");
   return 0;
}

