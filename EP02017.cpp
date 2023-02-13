#include <iostream>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
void botLeft(int a[100][100], int x1, int x2, int y1, int y2, int &d)
{
    int i, j;
    i = x2;
    for (j = y2; j >= y1; j--)
    {
        a[i][j] = d;
        d++;
    }
    j = y1;
    for (i = x2 - 1; i >= x1 + 1; i--)
    {
        a[i][j] = d;
        d++;
    }
}

void upRight(int a[100][100], int x1, int x2, int y1, int y2, int &d)
{
    int i, j;
    i = x1;
    for (j = y1; j <= y2; j++)
    {
        a[i][j] = d;
        d++;
    }
    j = y2;
    for (i = x1 + 1; i < x2; i++)
    {
        a[i][j] = d;
        d++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int d = 1;
        int a[100][100], b[100][100];
        int n, m, k;
        cin >> n >> m >> k;
        FOR(i,0,n){
            FOR(j,0,m){
                cin >> a[i][j];
            }
        }
        int x1 = 0, y1 = 0, x2 = n - 1, y2 = m - 1;
        while (x1 <= x2 || y1 <= y2)
        {
            upRight(b, x1, x2, y1, y2, d);
            if (d >= n * m)
            {
                break;
            }
            botLeft(b, x1, x2, y1, y2, d);
            if (x1 < x2)
            {
                x1++;
                x2--;
            }
            if (y1 < y2)
            {
                y1++;
                y2--;
            }
        }
        FOR(i,0,n){
            FOR(j,0,m){
                if (b[i][j] == k)
                {
                    cout << a[i][j] << endl;
                }
            }
        }
    }
    return 0;
}
