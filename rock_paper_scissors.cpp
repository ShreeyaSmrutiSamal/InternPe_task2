#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout << "Rock Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cin >> user;

    if(user == 1){
        cout << "You choose rock" << endl;
    }
     else if(user ==2){
        cout << "You choose paper" << endl;
    }
    else{
        cout << "You choose Scissor" << endl;
    }
    computer = rand()%3+1;
    if(computer == 1){
        cout << "Computer choose rock" << endl;
    }
     else if(computer == 2){
        cout << "Computer choose paper" << endl;
    }
    else{
        cout << "Computer choose Scissor" << endl;
    }

    if(user == computer){
        cout << "Match Tie" << endl;
    }

    else if(user == 1){
        if(computer == 2){
        cout << "You lose!" << endl;
    }
    if(computer == 3){
        cout << "You win!" << endl;
    }
    }

    else if(user == 2){
        if(computer == 1){
        cout << "You win!" << endl;
    }
    if(computer == 3){
        cout << "You lose!" << endl;
    }
    }

    else if(user == 3){
        if(computer == 1){
        cout << "You lose!" << endl;
    }
    if(computer == 3){
        cout << "You win!" << endl;
    }
    }
    return 0;
}