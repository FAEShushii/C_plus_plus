#include<iostream>
using namespace std;
int main()
{
  int i, n;
  long S = 0, P = 1;
  do
  {
    cin>>n;
    if(n < 1)
    {
      cout<<" 1";
    }
  }while(n < 1);
  for(int i = 1; i <= n; i ++){
    P = P * i;
    S = S + P;
  }
  cout<<S;

}
