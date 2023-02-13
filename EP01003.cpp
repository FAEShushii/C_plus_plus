#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int inputs;
    int ID;
    int count ;
    float grade ;
    char key101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    char key102[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    char answer[15];
    cin >> inputs;
    while (inputs--) {
        cin >> ID;
        count=0;
        
        if (ID == 101) {
            for (int i = 0; i < 15; ++i) {
                cin >> answer[i];
                if (answer[i] == key101[i])
                    count++;
            }
        }
        
        if (ID == 102) {
            for (int i = 0; i < 15; ++i) {
                cin >> answer[i];
                if (answer[i] == key102[i])
                    count++;
            }
        }
     	grade = (float)count / 1.5;
		cout<<setprecision(2)<<fixed<<grade<<endl;   
	}
}
