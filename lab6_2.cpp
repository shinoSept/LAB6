#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x) {
    double radian = x * 0.0174533;
    return radian;
}

double rad2deg(double x) {
    double degree = x * 57.2958;
    return degree;
}

double findXComponent(double l1, double l2, double rad1, double rad2) {
    double xcomp = l1 * cos(rad1) + l2 * cos(rad2);
    return xcomp;
}

double findYComponent(double l1, double l2, double rad1, double rad2) {
    double ycomp = l1 * sin(rad1) + l2 * sin(rad2);
    return ycomp;
}

double pythagoras(double a, double b) {
    double c = sqrt(a*a + b*b);
    return c;
}

void showResult(double length, double direction) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

    cout << "Length of the resultant vector = " << length << '\n';
    cout << "Direction of the resultant vector (deg) = " << direction << '\n';

    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
