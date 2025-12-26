// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<random>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    
    for(int i=0; i<3; i++ ){
        cin.get();
    }
    
    int randongrade =rand()%9;
    cout << "You will get " << grade[randongrade] << " in this 261102.";
}