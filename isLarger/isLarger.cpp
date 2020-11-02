#include<iostream>
using namespace std;

int x , y ;

int main(){

cout<<"Inserire i due numeri:"<<endl;
cin>>x;
cin>>y;

if (x>y){

    cout<< x<<" is larger."<<endl;
}
else {if(x==y){
    cout<<"These numbers are equal."<<endl;

}

else{
    cout<<y<<" is larger."<<endl;
}

} 


return 0;
}
