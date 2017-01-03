//CONSTRUCTOR, DESTRUCTOR AND COPY CONSTRUCTOR


#include<iostream.h>
//using namespace std;
class time
{
public:
	long sec;
public:
	time()
	{
	}
	time(long esec)
	{
		sec=esec;
	}
	time(time &x)
	{
		sec=x.sec;
	}
	~time(){

	}
	void display()
	{
		int hr,min,sec1;
		int flag1,flag2;
		flag1=flag2=0;
		hr=sec/3600;
		min=(sec-(hr*3600))/60;
		sec1=(sec-((hr*3600)+(min*60)));
		if(min>60)
		{
			min=min-60;
			flag1=1;
		}
		if(sec1>60)
		{
			sec1=sec1-60;
			flag2=1;
		}
		if(flag1==1)
			hr=hr+1;
		if(flag2==1)
			min=min+1;
		cout<<hr<<":"<<min<<":"<<sec1;
		cout<<endl;
	}
	time addtime(time t1,time t2)
	{
		time temp;
		temp.sec=t1.sec+t2.sec;
		return temp;
	}
};
int main()
{
	long x1,x2;
	cout<<"Enter the two different time in sec:";
	cin>>x1>>x2;
	time t1(x1);
	time t(t1);
	time t2(x2);
	time t3;
	cout<<"\n Time1:  ";
	t1.display();
	cout<<"\n time2:  ";
	t2.display();
	t3=t3.addtime(t1,t2);
	cout<<"\n Addition of time:  ";
	t3.display();

	return 0;
}


/*OUTPUT:

Enter the two different time in seconds: 3700 3800

Time1: 1:1:40

Time2: 1:3:20

ADDITION OF TIME: 2:5:0

*/