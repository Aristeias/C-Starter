#include <iostream>

#define PI 3.14

using namespace std;

class Circle {
	//����Ȩ��
public:
	//����
	double radius;
	//��Ϊ
	double calculatePerimeter() {
		return 2 * PI * radius;
	}
};

int main() {
	Circle circle;
	circle.radius = 3;
	cout << "�ܳ���" << circle.calculatePerimeter() << endl;

}