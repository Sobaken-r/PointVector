#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;


class Point
{
	float x;
	float y;
	//float z;
public:

	Point() : x(0.0), y(0.0) {}
	Point(float x_p, float y_p) : x(x_p), y(y_p) {}

	void setPointX(float x_p);
	void setPointY(float y_p);
	//void setPointZ(float z_p);

	float getPointX();
	float getPointY();
	//float getPointZ();

	void PrintPoint();
	void ConsolPoint();

	void PrintInConsole();

	void read();
	static bool isEqual(const Point& point1, const Point& point2);
	static Point add(const Point& point1, const Point& point2);
	static Point muit(const Point& point1, const Point& point2);
	static float distance(const Point& point1, const Point& point2);
	static float length(const Point& point);
};