#pragma once
class Circle {
	double radius;
public:
	Circle();
	Circle(double r);
	double getArea();
	double getRadius();
	Circle& setRadius(double r);
};