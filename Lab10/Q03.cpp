#include <iostream>

using namespace std;

class shape {
private:
	float l;
    float b;
public:
	shape(float a, float b){
        l = a;
        b = b; 
    }
	
	float area(){ return l*b; }
	
	float operator + (const shape& obj) {
		return this->area() + obj.area();
	}
};

int main() {
	shape shape1(3,4), shape2(4,2);
	
	cout << shape1 + shape2 << endl;
	
	return 0;
}