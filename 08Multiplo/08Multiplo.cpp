#include<iostream>
using namespace std;
int x;
int y;

int main(){

cout<<"Inserici il valore del primo numero: "<<endl;
cin>>x;
cout<<"Inserici il valore del secondo numero: "<<endl;
cin>>y;


if (y==0)
{
    cout<<"Impossibile"<<endl;
    return 0;
}
else
{
    



if (x%y==0)
{
    cout<<x<<" e' multiplo di "<<y<<endl;
}
else
{
    cout<<x<<" non e' multiplo di "<<y<<endl;
}
return 0;
}
}
