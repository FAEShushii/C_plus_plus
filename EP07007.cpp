#include <iostream>
using namespace std;
int m,n,a[100][100],b[100][100],c[100][100];
void Sx()
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            {
                    c[i][j]=0;
            }
            for(int k=1; k<=m; k++)
               	c[i][j]+=a[i][k]*b[k][j];
            	cout << c[i][j]<< " " ;
        }
       cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m ;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++) 
				cin >> a[i][j];
        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++) 
				b[i][j]=a[j][i];
        Sx();
    }
    return 0;
}
