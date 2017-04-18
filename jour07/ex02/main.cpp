#include "Array.cpp"

int main(void)
{
	int arr[] = {0, 1, 2};
	Array<int> a(3);
	Array<int> b(3);
	for (size_t i = 0; i < 10; i++) {
		try {
			a[i] = arr[i];
			std::cout << "Array of index " <<i  << " = "<< a[i] << std::endl;
		} catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	b = a;

	return (0);
}
