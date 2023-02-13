#include<iostream>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)

void swap(int mat[100][100], int row1, int row2,int col)
{
    for (int i = 0; i < col; i++)
    {
        int temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

int rankOfMatrix(int mat[100][100],int R , int C)
{
    int rank = C;

    for (int row = 0; row < rank; row++)
    {
        if (mat[row][row])
        {
           for (int col = 0; col < R; col++)
           {
               if (col != row)
               {
                 double mult = (double)mat[col][row] /
                                       mat[row][row];
                 for (int i = 0; i < rank; i++)
                   mat[col][i] -= mult * mat[row][i];
              }
           }
        }
        else
        {
            bool reduce = true;
            for (int i = row + 1; i < R;  i++)
            {
                if (mat[i][row])
                {
                    swap(mat, row, i, rank);
                    reduce = false;
                    break ;
                }
            }
            if (reduce)
            {
                rank--;
                for (int i = 0; i < R; i ++)
                    mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    return rank;
}

int main() {
    int t , d =1;
    cin >> t ;
    while(t--){
        int m , n , k , a[1000], b[10000];
    cin >> m >> n >> k ;;
    FOR(i,1,m) cin >> a[i] ;
    FOR(i,1,n) cin >> b[i] ;
    cout << "Test " << d << ":"<<endl;
    FOR(i,1,k) cout << a[i] << " " ;
    FOR(i,1,n) cout << b[i] << " " ;
    FOR(i,k+1,m) cout << a[i] << " " ;
    d++;
    cout << endl;
    }
}
