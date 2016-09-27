#include <iostream>
#include <cstdio>
#include <string>
#include "funcoes.h"

using namespace std;

string equac1(string);
string equac2(string);
void deriv(string);

int main(){
  string func;

printf("\
Digite sua fun��o para deriva-la !\n\
(Sempre coloque um numero antes do \"x\"\n\
Ex: sen(1x^2)\n\
F(x)= ");

  getline(cin,func);
  printf("F(x)= ");
//Deriva a primeira parte da equa��o(I):________________________________________
  if(equac1(func) == "sen"){
    printf("cos(");
  }
  else if(equac1(func) == "cos"){
    printf("-sen(");
  }
  else if(equac1(func) == "-cos"){
    printf("sen(");
  }
  else if(equac1(func) == "-sen"){
    printf("-cos(");
  }
//(END)Deriva a primeira parte da equa��o(I):___________________________________

//Segunda parte da equa��o com e^x:_____________________________________________
  if(equac2(func) == "e^x"){
    cout << equac2(func) << ")";
    cout << "*(";cout << equac2(func); cout << ")" << endl;
  }
//(END)Segunda parte da equa��o com e^x:________________________________________

  else{
//Segunda parte da equa��o(II):_________________________________________________
    cout << equac2(func) << ")";
    cout << "*("; deriv(func); cout << ")" << endl;
//(END)Segunda parte da equa��o(II):____________________________________________
  }


  return 0;
}
