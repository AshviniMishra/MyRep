#include<iostream>
using namespace std;
int main()
{
	int *ptr = new int;
	delete ptr;
	ptr = 0;
	delete ptr;
	return 0;
}
