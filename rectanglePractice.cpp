#include "rectanglePractice.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

void Rectangle::setWidth(double wid)
{
	width = wid;
}

void Rectangle::setLength(double len)
{
	length = len;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

void Rectangle::displayDimensions() const
{
	cout << "Length: " << length
		<< "\nWidth: " << width << endl;
}