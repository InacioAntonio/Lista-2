/*#include <iostream>
using namespace std;

int main(){
int a,b,c1;
  char ordem;
  cout << "Digite 3 numeros inteiros";
cin >> a >> b >> c1;
  if (a==b==c1){
    cout << "Invalido\n";
  } else{
    cout << "\nDigite a ordem dos tres numeros c ou d\n";
  }cin >> ordem; 
  if (ordem=='c'){
   if (a<b && a<c1){ //  caso a sendo o menor numero de todos na ordem crescente
   if (b<c1){
    cout << "A ordem sera de:"<<a<<b<<c1; // a ordem sera de abc ex: 123
  } else{ // a, c, b
    cout << "A ordem sera de:"<<a<<c1<<b; // a ordem a c e b
  } 
   }else {
    if (b<a && b<c1){// b é o menor numero
      if (a<c1){//a como o segundo numero da ordem crescente
        cout << "A ordem sera de:"<<b<< ","<<a<< ","<<c1;
      } else{
        cout << "A ordem sera de:"<<b<< ","<<c1<< ","<<a;//ordem b,c,a 
      }
    }else{// numero 2 não é o menor e sim o numero 3
      if (c1<a && c1<b){
        if(a<b){
          cout << "A ordem sera de:"<<c1<< ","<<a<< ","<<b;
        }else{
          cout << "A ordem sera de:"<<c1<< ","<<b<<" e "<<a;
        }
      }
  } 
   }          
}else{
   if(ordem=='d'){
     if (a>b && a>c1){ //a e o maior de todos
      if (b>c1){
        cout << "A ordem sera de:"<<a<< ","<<b<<" e "<<c1;
      }else{ //a c1 b
        cout << "A ordem sera de"<<a<<c1<<b;
      } 
     }else { //Se a não for o maior
       if (b>c1 && b>c1){
         if (a>c1){
           cout << "A ordem sera de"<<b<<a<<c1;
         }else{
           cout << "A ordem sera de"<<b<<c1<<a;
         }
       } else{
         if(c1>a && c1>b){
           if(a>b){
             cout << "A ordem sera de"<<c1<<a<<b;
           }else{
             cout << "A ordem sera de"<<c1<<b<<a;
           }
         }
       }
     }
   } 
}
}*/
