#include<iostream>
using namespace std;
void Sol(long long n)
{
    long long int d,res;
    while(n!=0)
    {
        d=n%10;
        if (d%2!=0) { res=0; break ;}  else { n=n/10; res=1 ;}
    }
    if(res==1) 
		cout<< "YES\n"; 
	else 
		cout<< "NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        Sol(a);
    }
    return 0;
}
