#include<iostream>
using namespace std;

float raggio;

float diametro; 
float circonferenza; 
float area; 

int main(){



    cout<<"Inserire il valore del raggio: "<<endl;
    cin>>raggio;

 diametro=raggio*2;
 circonferenza=2*3.14*raggio;
 area=3.14*raggio*raggio;


    cout<<"Il diametro vale"<<diametro<<",la circonferenza vale: "<<circonferenza<<" ,l'area vale: "<<area<<endl;
    return 0;

}