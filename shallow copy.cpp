// C++ program to implement the shallow copy

#include <iostream>
using namespace std;

class box {
private:
	int length;	
	int height;

public:

	box()
	{
		length = 0;
		height = 0;
	}

	void set_dimension(int len, int heig)
	{
		length = len;
		height = heig;
	}

	void show_data()
	{
		cout << " Length = " << length
			<< "\n Height = " << height
			<< endl;
	}
};

int main()
{

	box first;
	first.set_dimension(12, 16);
	first.show_data();

	box second = first;
	second.set_dimension(1,0);
	second.show_data();

	return 0;
}

