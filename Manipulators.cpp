
#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main() {
    float a=9.545645145;
    int num=100;
    char upper = toupper('a');
    char lower= tolower('A');
    cout <<"Next Line : "<< "Hello"<<endl<< "world!";
    cout<<endl;
    cout <<"Set Width : "<< "Hello"<<setw(20)<< "world!";
    cout<<endl;
    cout <<"Set Precision : "<<setprecision(4)<< a;
    cout<<endl;
    cout <<"Set Base (Hex) : "<< setbase(16) << num ;
    cout<<endl;
    cout <<"Set Base(Octa) : "<< setbase(8) << num ;
    cout<<endl;
    cout<<"Null Character : "<<"Hello"<<ends;
    cout <<endl;
    cout <<"Set IO Flags(Hex) : "<< hex<< setiosflags(ios::showbase) << num << endl;
    cout <<"Uppercase : "<<upper<<endl; 
     cout <<"Lowercase : "<<lower<<endl; 
    
    return 0;
}
