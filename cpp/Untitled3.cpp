#include<iostream>
#include<cstring>
using namespace std;
class Emp
{
	private:
		int empno;
		char ename[20];
		
	public:
		Emp()
		{
			empno=0;
			strcpy(enam,"Nothing");
		}
		
		Emp(int eno, char nm[])
		{
			empno=eno;
			strcpy=(ename,nm);
		}
		
		void show()
		{
			cout<<"Emp no. ="<<empno<<endl;
			cout<<"Name ="<<ename<<endl;
		}
		
};
int main()
{
	Emp *ptr;
	pt=new Emp(101,"vipul");
	(*ptr).show();
	ptr->show();
	delete ptr;
	return ;
}

