#include<bits/stdc++.h>
using namespace std;
 
int md[13]={0,31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
string day[7]={"Sat","Sun","Mon","Tue","Wed","Thu","Fri"};
 
int leapYears(int y,int m)
{
    if(m<=2)
    y--;
    return ((y/4)-(y/100)+(y/400));
}
 
int main()
 {
	    int d,m,y,i;
	    cin>>m>>y;
	    d=1;
	    long long td=(y*365)+d;
	    for(i=1;i<m;i++)
	    td+=md[i];
	    td+=leapYears(y,m);
	    int r=(td)%7;
	    cout<<"monthly calender"<<endl;
	    td=md[m];
	    if(m==2)
	    {
	    	if((y%4==0&&y%100!=0)||(y%400==0))
	    	td++;
	    }
	    for(i=1;i<=td;i++)
	    { 
	    	cout<<i<<":"<<day[(r-1+i)%7]<<" ";
	    	if(i%7==0)
	    	cout<<endl;
	    }
	return 0;
}
