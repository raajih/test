#pragma once
#ifndef RECTANGLEPRACTICE_H
#define RECTANGLEPRACTICE_H

class Rectangle
{
private:
		double length, width;

public:
	Rectangle();
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	void displayDimensions() const;



};



#endif