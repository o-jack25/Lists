#include <iostream>
#include <string>


using namespace std;

template <typename Type>
void swap2(Type* x, Type* y) {
	Type temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	
	int a= 10, b = 20;

	cout << a << " " << b << endl;
	swap2(&a, &b);
	cout << a << " " << b << endl;


	string x = "Hello", y = "World";
	cout << x << " " << y << endl;
	swap2(&x, &y);
	cout << x << " " << y << endl;


	return 0;

}