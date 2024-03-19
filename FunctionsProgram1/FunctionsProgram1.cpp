#include <iostream>
#include <cmath>

using namespace std;

double calcDistance(double x1, double y1, double x2, double y2);
double calcRadius(double centerX, double centerY, double pointX, double pointY);
double calcCircumference(double radius);
double calcArea(double radius);

int main() {
    double centerX, centerY;
    double pointX, pointY;

    cout << "Enter the X value of the center: ";
    cin >> centerX;
    cout << "Enter the Y value of the center: ";
    cin >> centerY;
    cout << "Enter the X value of a point on the circumference: ";
    cin >> pointX;
    cout << "Enter the Y value of a point on the circumference: ";
    cin >> pointY;

    double radius = calcRadius(centerX, centerY, pointX, pointY);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    return calcDistance(centerX, centerY, pointX, pointY);
}

double calcCircumference(double radius) {
    const double pi = 3.1416;
    return 2 * pi * radius;
}

double calcArea(double radius) {
    const double pi = 3.1416;
    return pi * pow(radius, 2);
}