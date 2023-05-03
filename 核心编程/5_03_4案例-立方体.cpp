#include <iostream>

using namespace std;

class Cube {
protected:
	double m_L;
	double m_H;
	double m_W;
public:
	void setLHW(double L, double W, double H) {
		this->m_L = L;
		this->m_W = W;
		this->m_H = H;
	}
	double getL() {
		return this->m_L;
	}
	double getH() {
		return this->m_H;
	}
	double getW() {
		return this->m_W;
	}
	double getVolume() {
		return this->m_H * this->m_L * this->m_W;
	}
	double getArea() {
		return (this->m_L * this->m_H + this->m_L * this->m_W + this->m_H * this->m_W) * 2;
	}
	void compare(Cube* anotherCube) {
		if (anotherCube->getVolume() == this->getVolume()) {
			cout << "相等" << endl;
		}
		else {
			cout << "不相等" << endl;
		}

	}
};

void compareG(Cube* cube, Cube* anotherCube) {
	if (anotherCube->getVolume() == cube->getVolume()) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
}

int main() {
	Cube cube1,cube2;
	cube1.setLHW(2, 3, 4);
	cube2.setLHW(3, 2, 4);
	compareG(&cube1, &cube2);
	cout << cube1.getArea() << endl;
	cout << cube2.getArea() << endl;
	cube1.compare(&cube2);

}