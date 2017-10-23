// Programa que suma N numeros naturales
// Autor CRescenciano Cuautle Coyotl
// 23 de Octubre 2017
 
#include <iostream>
using namespace std;
int main  (){
int sum=0;
int count=1;
int N=0;
cout<<"Dame un numero entero "<<endl;
  cin>>N;
for(count=0; count<=N; count++){
sum=sum+count;
}
cout<<"La  suma de los N numeros naturales es: "<<sum<<endl;
return 0;
}
