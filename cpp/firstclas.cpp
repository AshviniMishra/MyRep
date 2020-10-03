#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		char name[20];
		float m1,m2,m3;
		
	public:
		void getdata()
		{
			cout<<"Enter the roll number of the studen"<<endl;
			cin>>rollno;
			cout<<"Enter the name of the student"<<endl;
			cin>>name;
			cout<<"Enter the marks of the student in three subjects"<<endl;
			cin>>m1>>m2>>m3;
			
		}
		
		void showdata()
		{
			cout<<"Roll no of the studen"<<rollno<<endl;
			cout<<"Name of the student is "<<name<<endl;
			cout<<"Marks of the student in three subjects is"<<endl<<m1<<" "<<m2<<" "<<m3<<endl;
			cout<<"Percentage of the student is"<<calcperc()<<endl;
		}
		
		float calcperc()
		{
			float perc;
			perc=(m1+m2+m3)/3;
			return perc;
		}
	};
		
	int main()
	{
		student s1;
		s1.getdata();
		s1.showdata();
		return 0;
	}
	

