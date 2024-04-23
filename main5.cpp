#include <iostream>

using namespace std;


int*& makeAndFillArray(int*& ptr, int size) {
	ptr = new int[size];

	for (int i = 0; i < size; i++) {
		ptr[i] = i;

	}
	return ptr;
}
#if 1;
int main() {
	int* arrPtr = nullptr;

	int size = 6;
	makeAndFillArray(arrPtr, size);

	cout << "Values of the array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arrPtr[i] << " ";
	}
	cout << endl;

	delete[] arrPtr;

	return 0;
#endif
}
