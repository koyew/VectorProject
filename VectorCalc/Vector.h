#pragma once
#include <math.h>
class Vector

{
	public:
		

		double Calculate1(double m, double t); //x comp
		double Calculate2(double m, double t); //y comp

		double Calculate3(double m, double x); // y comp
		double Calculate4(double m, double x); // theta

		double Calculate5(double m, double y); // x comp
		double Calculate6(double m, double y); // theta

		double Calculate7(double x, double y); // mag
		double Calculate8(double x, double y); //theta
};

