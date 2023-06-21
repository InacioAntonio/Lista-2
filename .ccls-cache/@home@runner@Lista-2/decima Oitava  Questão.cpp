/*#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int total1,quantidade,total2;
    float valordaparcela;
  cout << " Digite o Valor da compra";
  cin >> total1;
  cout << " Digite a quantidade de parcelas";
  cin >> quantidade;
  if(quantidade<=10){
      cout << "Sem Juros";
      valordaparcela=total1/quantidade;
      cout << " O valor da Parcela sera de:"<<valordaparcela<<" R$ ";
      cout << " O valor total é de:"<<total1;
  }else{
      if(quantidade>10){
          cout << "Com juros de 15%";
          valordaparcela=(total1*(15/100))/quantidade;
          cout << "O valor da Parcela sera de:"<<valordaparcela<<" R$ ";
          total2=(total1*(15/100))+total1;
          cout << "O valor total sera de: "<<total2<< " R$ ";
      }
  }
}*/