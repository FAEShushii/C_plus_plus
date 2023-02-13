#include<iostream>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

void Sort(int a[100][100],int n,int t){
    int tg;
    FOR(i,0,n-1){
        FOR(j,i+1,n){
            if(a[i][t] > a[j][t]){
                tg = a[i][t];
                a[i][t] = a[j][t];
                a[j][t] = tg ;
            }
        }
    }
}
int main(){
    int m , n , i ;
    cin>>m>>n>>i;
    int a[100][100];
    FOR(i,0,m){
        FOR(j,0,n) cin>>a[i][j];
    }
    Sort(a,m,i-1);
    FOR(i,0,m){
        FOR(j,0,n) cout<<a[i][j]<<" ";
        cout<<endl;
    }
	return 0;
}
