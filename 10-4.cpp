#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle // write Class Circle aeng i sas

int main()
{
point c,p;
    double r;
    cout << "Center of Circle: ";
    cin >> c.xPosition >> c.yPosition;
    cout << "Radius of Circle: ";
    cin >> r;
    cout << "Point to Check: ";
    cin >> p.xPosition >> p.yPosition;
    Circle circle(c,r);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << p.xPosition << ", " << p.yPosition << ") is "
            << circle.distanceFromCenter(p) << endl;
    if (circle.contains(p)) cout << "This circle contains this point." << endl;
    else cout << "This point is not in this circle." << endl;

}