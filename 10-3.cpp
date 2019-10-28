#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
private:
    point center;
    double radius;
public:
    Circle(point c,double r){
        center = c;
        radius = r;
    }
    double area(){
        return M_PI*radius*radius;
    }
    double distanceFromCenter(point pt){
        return sqrt(pow((center.xPosition - pt.xPosition),2) +
                    pow((center.yPosition - pt.yPosition),2));
    }
    int contains(point pt){
        return (distanceFromCenter(pt)>radius)?0:1;
    }
};


int main()
{
   // build Object aeng naja
}