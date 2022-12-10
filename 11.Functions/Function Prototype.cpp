#include <iostream>
using namespace std;

double radius{};
double height{};
const double pi{3.14};

//Function Prototype - we can use function after main function

double area_circle(double);             //return double with paremeter of double
double vol_cylinder(double, double);    //return double with paremeter of double,double
void vol_of_cylinder();                 //return nothing with no paremeter
void area_of_circle();                  //return nothing with no paremeter

int main()
{
    area_of_circle();
    vol_of_cylinder();
    return 0;
}

double area_circle(double radius)
{
    return pi * radius * radius;
}
double vol_cylinder(double radius, double height)
{
    return area_circle(radius) * height;
}
void vol_of_cylinder()
{
    cout << "Enter the radius od cylinder ";
    cin >> radius;
    cout << "Enter the height of cylinder ";
    cin >> height;
    cout << "Volume of cylinder of radius " << radius << " is " << vol_cylinder(radius, height) << endl;
}
void area_of_circle()
{
    cout << "Enter the radius of circle ";
    cin >> radius;
    cout << "Area of circle of radius " << radius << " is " << area_circle(radius) << endl;
    cout << "----------------------------------------" << endl;
}