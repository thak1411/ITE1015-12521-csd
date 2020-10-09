#include "shapes.h"

Circle::Circle() {
	this->x = this->y = this->r = 0;
}
Circle::Circle(int x, int y, int r) {
	this->x = x;
	this->y = y;
	this->r = r;
}
double Circle::calcArea() {
	return PI * this->r * this->r;
}
double Circle::calcPerimeter() {
	return 2. * PI * this->r;
}

Rectangle::Rectangle() {
	this->x1 = this->y1 = this->x2 = this->y2 = 0;
}
Rectangle::Rectangle(int x1, int y1, int x2, int y2) {
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}
int Rectangle::calcArea() {
	return (x2 - x1) * (y1 - y2);
}
int Rectangle::calcPerimeter() {
	return (x2 - x1) * 2 + (y1 - y2) * 2;
}
