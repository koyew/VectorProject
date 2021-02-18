#include "Vector.h"
#include <math.h>


double Calculate1(double m, double t)
{
	t = t * 3.141592653589793 / 180;
	double x = m * (cos(t));
	return x;
}

double Calculate2(double m, double t)
{
	t = t * 3.141592653589793 / 180;
	double y = m * (sin(t));
	return y;
}

double Calculate3(double m, double x)
{
	double y = ((m * m) - (x * x));
	return y;
}
double Calculate4(double m, double x)
{
	double y = ((m * m) - (x * x));
	double theta = (tan((y / x) * 3.141592653589793 / 180));
	return theta;
}
double Calculate5(double m, double y)
{
	double x = ((m * m) - (y * y));
	return x;
}
double Calculate6(double m, double y)
{
	double x = ((m * m) - (y * y));
	double theta = (tan((y / x) * 3.141592653589793 / 180));
	return theta;
}
double Calculate7(double x, double y)
{
	double z = ((x * x) + (y * y));
	z = sqrt(z);
	return z;
}
double Calculate8(double x, double y)
{
	double theta = (tan((y / x) * 3.141592653589793 / 180));
	return theta;
}