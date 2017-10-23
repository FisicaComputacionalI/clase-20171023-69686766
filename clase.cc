#include <iostream>
using namespace std;
int main(){
  int a=0,i,n;
        cout<<"Ingrese un numero"<<endl;
        cin>>n;
        for(i=1;i<(n+1);i++){
        if(n%i==0){
                a++;
                }
        }
        if(a!=2){
                cout<<"No es primo";
        }else{
                cout<<"Si es primo";
        }
return 0;
}

