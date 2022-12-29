#ifndef TRI_H
#define TRI_H


#include <iostream>

class Triangle {
	public:
		Triangle() {
			setA(3);
			setB(4);
			setC(5);
		}
		Triangle(int q, int w, int e);
		void setA(int x);
		void setB(int y);
		void setC(int z);
		int getA();
		int getB();
		int getC();
		bool isEquilateral();
		bool isScalene();
		bool isIsosceles();
		bool isRight();
	private:
		int a;
		int b;
		int c;
};
#endif