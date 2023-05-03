#include <iostream>

#define PI 3.14

using namespace std;

class Circle {
	//访问权限
public:
	//属性
	double radius;
	//行为
	double calculatePerimeter() {
		return 2 * PI * radius;
	}
};

int main() {
	Circle circle;
	circle.radius = 3;
	cout << "周长：" << circle.calculatePerimeter() << endl;

}