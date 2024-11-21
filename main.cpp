#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double radius, height, volume, surface_area;


    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;


    volume = M_PI * pow(radius, 2) * height;


    surface_area = 2 * M_PI * radius * (radius + height);


    cout << fixed;
    cout.precision(2);
    cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;
    cout << "The surface area of the cylinder is: " << surface_area << " square units" << endl;

    return 0;
}


