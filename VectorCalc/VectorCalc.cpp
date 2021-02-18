
#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double m = 0.0;
	double t = 0.0;
	char in = 'a';
	double magnitude = 0.0;
	double theta = 0.0;
	double result = 0.0;
	double result2 = 0.0;

	cout << "Press Q for Magnitude and Angle, W  for Magnitude and X Comp, E for Magnitude and Y Comp, or R for X and Y Comp." << endl;
	cout << "Press S to stop." << endl;
	cout << "This program does not calculate the distance nor the angle between vectors in the 2D and 3D planes." << endl;
	cin >> in;
	do {
		if (in == 'Q' || in == 'q')
		{
			cout << "Enter the magnitude and angle of the vector: " << endl;
			Vector v;
			cin >> m >> t;
			result = v.Calculate1(m, t);
			result2 = v.Calculate2(m, t);
			cout << "The x comp of the vector is: " << result << " and the y comp is: " << result2 << endl;
			cin >> in;

		}

		else if (in == 'W' || in == 'w')
		{
			cout << "Enter the magnitude and x comp of the vector: " << endl;
			Vector v;
			cin >> m >> x;
			result = v.Calculate3(m, x);
			result2 = v.Calculate4(m, x);
			cout << "The y comp of the vector is: " << result << " and " << result2 << " the magnitude is at degrees." << endl;
			cin >> in;

		}

		else if (in == 'E' || in == 'e')
		{
			cout << "Enter the magnitude and y comp of the vector: " << endl;
			Vector v;
			cin >> m >> y;
			result = v.Calculate5(m, y);
			result2 = v.Calculate6(m, y);
			cout << "The x comp of the vector is: " << result << " and " << result2 << " the magnitude is at degrees." << endl;
			cin >> in;

		}


		else if (in == 'R' || in == 'r')
		{
			cout << "Enter the x and y components of the vector: " << endl;
			Vector v;
			cin >> x >> y;
			result = v.Calculate7(x, y);
			result2 = v.Calculate8(x, y);
			cout << "The magnitude of the vector is: " << result << " and " << result2 << " the magnitude is at degrees." << endl;
			cin >> in;

		}
		else if (in != 'Q' || in != 'q' || in != 'W' || in != 'w' || in != 'E' || in != 'e' || in != 'R' || in != 'r')
		{
			cout << "Invalid input." << endl;
			cin >> in;
		}
	} while (in != 'S' || in != 's');
}
