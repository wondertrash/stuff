#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int chambers[6]={0};
    bool safe=true;
    char choice;
    chambers[rand()%6]=1;
    cout << "Welcome to Russian Roulette!\n";
    for(int i=0;i<6;i++) {
        cout << "Shoot yourself(s) or your opponent(w): ";
        cin >> choice;
        if(choice=='s') {
            if (chambers[i]==1) {
                cout << "You died!\n";
                break;
            }else {
                cout << "You survived! For now...\n";
            }
        }else if(choice=='w') {
            if(chambers[i]==1) {
                cout << "You killed your opponent and won!\n";
                break;
            }else if(safe) {
                safe=false;
                cout << "You wasted your safe shot!\n";
            }else {
                cout << "You have no safe shots left and lost.\n";
                break;
            }
        }else {
            cout << "Invalid choice! Please choose 's' or 'w'.\n";
            i--;
        }
    }
    return 0;
}