#pragma once
#include <cmath>

class Vertex3d
{
private:
	double x;
	double y;
	double z;

public:
	Vertex3d()
	{
		setX(0);
		setY(0);
		setZ(0);
	}

	Vertex3d(double _x, double _y, double _z)
	{
		setX(_x);
		setY(_y);
		setZ(_z);
	}

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}

	double getZ()
	{
		return z;
	}

	void setX(double _x)
	{
		x = _x;
	}

	void setY(double _y)
	{
		y = _y;
	}

	void setZ(double _z)
	{
		z = _z;
	}

	void setXYZ(double _x, double _y, double _z)
	{
		setX(_x);
		setY(_y);
		setZ(_z);
	}

	void moveVertex3d(double _x, double _y, double _z)
	{
		setX(getX() + _x);
		setY(getY() + _y);
		setZ(getZ() + _z);
	}

	/*void scaleVertex3d(double _x, double _y, double _z)
	{
	setX(getX() * _x);
	setY(getY() * _y);
	setZ(getZ() * _z);
	}*/

	void rotateVertex3d(double _x, double _y, double _z)
	{

	}
};
