#include<iostream>
using namespace std;
int main(){
// Question1


  cout<<"hello world";



//question2


int a;
float b;
char c;
cout<<"enter the integer"<<endl;
cin>>a;
cout<<"enter the float"<<endl;
cin>>b;
cout<<"enter the character"<<endl;
cin>>c;


//question3


int a;
cout<<"enter the first integer a"<<endl;
cin>>a;
int b;
cout<<"enter the second integer b"<<endl;
cin>>b;
cout<<a+b<<endl;
cout<<a-b<<endl;
cout<<a*b<<endl;
cout<<a/b<<endl;


//question 4;


 float c;
cout<<"enter the temperature in celsius "<<endl;
cin>>c;
cout<<" (9*c)/5+32"<<endl;

//question 5


cout<<"hello\nworld"<<endl;
cout<<"hello\tworld"<<endl;
cout<<"hello\bworld"<<endl;

//question 6

int a;
cout<<"enter the integer a"<<endl;
cin>>a;
a+=10;
cout<<a<<endl;
a-=5;
cout<<a<<endl;


//question 7

int p,q;
cout<<"enter two integer p and q"<<endl;
cin>>p>>q;
p=5;
q=10;
p=p^q;
q=p^q;
p=p^q;
cout<<"after swapping "<<endl<<"p="<<p<<endl<<"q="<<q<<endl;

//question 8


    int days;
    cout << "\nEnter number of days late: ";
    cin >> days;
    if (days <= 5)
        cout << "Fine: 50 paise" << endl;
    else if (days <= 10)
        cout << "Fine: 1 rupee" << endl;
    else if (days <= 30)
        cout << "Fine: 5 rupees" << endl;
    else
        cout << "Membership cancelled" << endl;

    //question 9
     
    int a,b;
    int  z;
    cout<<"enter the integer a and b"<<endl;
    cin>>a>>b;
    cout<<"enter z from 1 to 4"<<endl;
    cin>>z;
    switch(z){
        case 1 : cout<<a+b<<endl;break;
        case 2 : cout<<a-b<<endl;break;
        case 3 : cout<<a*b<<endl;break;
        case 4 : cout<<a/b<<endl;break;
        default : cout<<"invalid numbers"<<endl;
   }

//question 10;
 
int a;
cout<<"enter the integer"<<endl;
cin>>a;
if(a%2==0){
    cout<<"a is even"<<endl;
}
else
cout<<"a is odd"<<endl;

  return 0;

}