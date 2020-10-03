#include<iostream>
using namespace std;
class Time
{
	private:
		int hour=15,minute=10,second=05;
		
	public:
		/*Time()
		{
			hour=0;
			minute=0;
			second=0;
			cout<<"Constructor 1 is called"<<endl;
		}*/
		
		Time(int h)
		{
			hour=h;
			minute=0;
			second=0;
			cout<<"Constructor 2 is called"<<endl;
		}
		
		Time(int h,int m)
		{
			hour=h;
			minute=m;
			second=0;
			cout<<"Constuctor 3 is called here"<<endl;
			
		}
		
		Time(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		
		
		void show()
		{
			cout<<"The time is "<<hour<<" :"<<minute<<" :"<<second<<" "<<endl;
		}
		
		void add(int h)
		{
			hour=hour+h;
			
			if(hour>23)
			hour=hour-23;
		}
		
		void add(int h,int m)
		{
			minute=minute+m;
			
			if(m>60)
			{
				minute=m-60;
				hour++;
			}
			add(h);
		}
		
		
		
};
int main()
{
	int x=20,y=15,z=45;
	Time t(21,10);
	t.show();
	return 0;	
}
