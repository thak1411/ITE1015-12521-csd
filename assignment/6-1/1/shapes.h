#ifndef __SHAPES_H
#define __SHAPES_H

#define PI 3.14

class Circle {
private:
	double x, y, r;
public:
	Circle();
	Circle(int, int, int);
	double calcArea();
	double calcPerimeter();
};

class Rectangle {
private:
	int x1, y1, x2, y2;
public:
	Rectangle();
	Rectangle(int, int, int, int);
	int calcArea();
	int calcPerimeter();
};

#endif
