#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using std::cout;
using std::endl;
//创建Shape/Circle/Rectangular对象
//用子类类对象调用基类函数toString（）
int main() {
	Shape s1{ Color::blue, false };
	Circle c1{ 3.9, Color::blue, true };
	Rectangle r1{ 4.0, 1.0, Color::red, true };
	cout << s1.toString() << endl;
	cout << c1.toString() << endl;
	cout << r1.toString() << endl;
	cout << "C1's Area:" << c1.getArea() << endl;
	cout << "R1's Area:" << r1.getArea() << endl;
	std::cin.get();
	return 0;
}