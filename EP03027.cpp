#include<iostream>
#include<string.h>
using namespace std;
main(){
	char s[200];
	cin>>s;
	int n=strlen(s);
	s[n-2] = tolower(s[n-2]);
	s[n-1] = tolower(s[n-1]); 
	if(s[n-3]=='.'&& s[n-2] =='p' && s[n-1]=='y')
	cout<<"yes";
	else cout<<"no";
}
