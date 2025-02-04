#include "Point.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cmath>
using namespace std;

void Point::setPointX(float x_p)
{
	x = x_p;
}

void Point::setPointY(float y_p)
{
	y = y_p;
}

//void Point::setPointZ(float z_p)
//{
// z = z_p;
//}

float Point::getPointX()
{
	return 0.0f;
}

float Point::getPointY()
{
	return 0.0f;
}

//float Point::getPointZ()
//{
// return 0.0f;
//}

void Point::PrintPoint()
{
	ofstream out;
	out.open("PointTXT.txt", std::ios::app);
	out << "X = " << x << " Y = " << y << endl;
	out.close();
}

void Point::ConsolPoint()
{
	char buf[100] = {};
	ifstream some_file("PointTXT.txt");
	some_file.getline(buf, 100);
	some_file.close();
	cout << buf << endl;
}


void Point::PrintInConsole()
{
	cout << "X = " << x << " Y = " << y << endl;
}

void Point::read()
{
	cout << "Введите Х = ";
	cin >> x;
	cout << "Введите Y = ";
	cin >> y;
}

bool Point::isEqual(const Point& point1, const Point& point2)
{
	return (point1.x == point2.x && point1.y == point2.y);
}

Point Point::add(const Point& point1, const Point& point2)
{
	return Point(point1.x + point2.x, point1.y + point2.y);
}

Point Point::muit(const Point& point1, const Point& point2)
{
	return Point(point1.x * point2.x, point1.y * point2.y);
}

float Point::distance(const Point& point1, const Point& point2)
{
	//(point1.x - point2.x)* (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y)
	float dx = point1.x - point2.x;
	float dy = point1.y - point2.y;
	return sqrt(dx * dx + dy * dy);
}

float Point::length(const Point& point)
{
	return sqrt(point.x * point.x + point.y * point.y);
}