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
			strcpy(ename,"Nothing");
		}
		
		Emp(int eno, char nm[])
		{
			empno=eno;
			strcpy(ename,nm);
		}
		
		void show()
		{
			cout<<"Emp no. ="<<this->empno<<endl;
			cout<<"Name ="<<this->ename<<endl;
		}
		
};
int main()
{
	Emp *ptr;
	ptr=new Emp;
	//(*ptr).show();
	ptr->show();
	delete ptr;
	return 0 ;
}

