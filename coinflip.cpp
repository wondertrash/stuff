#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
int main() {
    srand(time(0));
    int odds[1000]={0}, r=(rand()%1000);
    char flip;
    odds[0]=INT_MIN;
    for(int i=0;i<999;i++) {
        if((i%2)==1) {
            odds[i]=1;
        }
    }
    cout << "Press 'f' to flip the coin: ";
    cin >> flip;
    switch (flip) {
    case 'f':
        cout << "Flipping";
        for (int i = 0; i < 3; i++) {
            sleep(1);
            cout << ".";
        }
        cout << "\n";
        if(r==0) {
            cout << "It landed on its side!\n";
        }else if(r%2==1) {
            cout << "It landed on tails!\n";
        }else {
            cout << "It landed on heads!\n";
        }
        break;
    default:
        cout << "Invalid character!\n";
        break;
    }
    return 0;
}