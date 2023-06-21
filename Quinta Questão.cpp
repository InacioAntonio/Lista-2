/*#include <iostream>
using namespace std;
// Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
//conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
//calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
//aumento. Mostre o salário antigo, o novo salário e a diferença. 
int main(){
float salario,nsalario,codigo,diferenca;
  cout << "\nQual e o seu salario ? ";
    cin >> salario;
  cout << "Qual e o seu codigo";
  cin >> codigo;
  if (codigo>103){
    nsalario=(salario*0.4)+salario;
    diferenca=nsalario-salario;
    cout << "Seu salario antes era de:"<<salario<<" R$, Agora seu novo salario e de:"<<nsalario<<"R$ a diferenca pro  seu salario antigo e de:"<<diferenca;
  } else
    if (codigo==103){
       nsalario=(salario*0.3)+salario;
    diferenca=nsalario-salario;
    cout << "Seu salario antes era de:"<<salario<<" R$, Agora seu novo salario e de:"<<nsalario<<"R$ a diferenca pro  seu salario antigo e de:"<<diferenca;
    } else
      if (codigo==102){
         nsalario=(salario*0.2)+salario;
    diferenca=nsalario-salario;
    cout << "Seu salario antes era de:"<<salario<<" R$, Agora seu novo salario e de:"<<nsalario<<"R$ a diferenca pro  seu salario antigo e de:"<<diferenca;
      } else
        if (codigo==101){
           nsalario=(salario*0.1)+salario;
    diferenca=nsalario-salario;
      cout << "Seu salario antes era de:"<<salario<<" R$, Agora seu novo salario e de:"<<nsalario<<"R$ a diferenca pro  seu salario antigo e de:"<<diferenca;
        } else
          cout << "\nValor Invalido\n";
          
      
}*/