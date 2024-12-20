#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
string Grade;
int main(){
    cout << "Press Enter 3 times to reveal your future.";
   
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    int X=rand()%9;
    if(X==0){Grade="A";}
    if(X==1){Grade="B+";}
    if(X==2){Grade="B";}
    if(X==3){Grade="C+";}
    if(X==4){Grade="C";}
    if(X==5){Grade="D+";}
    if(X==6){Grade="D";}
    if(X==7){Grade="F";}
    if(X==8){Grade="W";}
    cout << "You will get "<<Grade<<" in this 261102.";
}
