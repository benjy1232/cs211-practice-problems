#include<iostream>
using namespace std;
const float PI = 3.1415926; //Pi as a constant that will not be messed with

int main(void) {
	float width, height, radius, areaR, areaC;
	cout << "Please enter width of rectangle: ";
	cin >> width;
	cout << "Please enter height of rectangle: ";
	cin >> height; 
	cout << "Please enter radius of circle: ";
	cin >> radius; 
	areaR = width * height; //area of a rectangle = width * height
	areaC = PI * radius * radius; //area of a circle is pi*r^2
	cout << "Rectangle fits inside circle: ";
	if (areaC > areaR) { // compares the area of both circles and rectangles
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}
