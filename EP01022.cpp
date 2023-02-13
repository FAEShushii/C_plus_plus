#include<iostream>
using namespace std;
int main()
{
	int day, year=0, week=0;
	cin>>day;
	while(day >= 356){
		day -= 365;
		year++;
	}
	while(day >= 7){
		day -= 7;
		week++;
	}
	cout<< year <<" " << week <<" " << day <<" ";
	return 0;
}
