#include<iostream>
using namespace std;
class time
{
	private:
		int hour;
		int min;
		
	public:
		
		time()
		{
			hour=min=0;
			cout<<"Zero parameter cosntr"<<endl;
		}
		
		time(int hour,int min)
		{
			this->hour=hour;
			this->min=min;
			cout<<"2 para constr "<<endl;
		}
		
		void show()
		{
			cout<<"The time is "<<hour<<":"<<min<<endl;
		}
		
		
};
int main()
{
	time t1;
	t1.show();
	time t2(12,45);
	t2.show();
	return 0l;
}
