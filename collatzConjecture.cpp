#include<iostream>

using namespace std;

int main(){

    int x, cont = 0;
    cout<<"Enter the number to start: "; cin>>x;

    while(x > 1){
        
        if(x % 2 == 0) x /= 2;
        else x = (x * 3) + 1;
        cont++;
    }
    cout<<"Number of repetition: "<<cont<<endl;

    return 0;
}