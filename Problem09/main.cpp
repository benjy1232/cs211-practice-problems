#include<iostream>
using namespace std;
const float PI = 3.1415926;

int main(void) {
	float width, height, radius, areaR, areaC;
	cout << "Please enter width of rectangle: ";
	cin >> width;
	cout << "Please enter height of rectangle: ";
	cin >> height; 
	cout << "Please enter radius of circle: ";
	cin >> radius; 
	areaR = width * height;
	areaC = PI * radius * radius;
	cout << "Rectangle fits inside circle: ";
	if (areaC > areaR) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}
