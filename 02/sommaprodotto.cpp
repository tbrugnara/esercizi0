#include<iostream>
using namespace std;
int main(){

int x , y ;


cout<<"Inserire il valore dei 2 numeri:"<<endl;
cin>>x ;
cin>>y ;


int somma, differenza, prodotto, rapporto, resto;

 somma=x+y ;
  prodotto=x*y ;
  differenza=x-y ;

  rapporto=x/y ;
  resto=x%y ;




cout<<"La somma vale: "<<somma<<endl;
cout<<"Il prodotto vale: "<<prodotto<<endl;
cout<<"La differenza vale: "<<differenza<<endl;
cout<<"Il rapporto vale: "<<rapporto<<endl;
cout<<"Il resto vale: "<<resto<<endl;

return 0;
}
