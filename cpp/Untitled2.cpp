#include<iostream>
using namespace std;

class Time
{
	private:
		int hour;
		int min;
		int sec;
	public:
		Time()
		{
			hour=min=sec=0;
		}
		
		Time(int h,int m,int s)
		{
			hour=h;
			min=m;
			sec=s;
		}
		
		void show()
		{
			cout<<"Time is  "<<hour<<":"<<min<<":"<<sec<<endl;
		}
		
		Time operator +(int s)
		{
			Time temp;
			int x,y;
			temp.hour=hour;
			temp.min=min;
			temp.sec=sec+s;
			if(temp.sec<=60)
			{
				x=temp.sec/60;
				y=temp.sec%60;
				temp.min+=x;
				if(temp.min>=60)
				{
					x=temp.min/60;
					y=temp.min%60;
					temp.hour+=x;
					temp.min=y;
					if(temp.hour>=2)
					{
						x=temp.hour%24;
					}
				}
			}
			return temp;
		}

};
int main()
{
	Time t1(12,54,45),t2(23,45,15),t3;
	t3=t1+45;
	t1.show();
	t2.show();
	t3.show();
	return 0;
}
