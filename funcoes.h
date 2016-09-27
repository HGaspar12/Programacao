#include <iostream>
#include <string>

using namespace std;

//Seleciona a primeira parte da equação:________________________________________
  string equac1(string func){
    int i = 0;
    int c = 0;

    while(func[i] != '('){
      c++;
      i++;
    }
    string equac1 = func.substr(0,c);

    return equac1;
  }
//(END)Seleciona a primeira parte da equação:___________________________________


//Seleciona a segunda parte da equação:_________________________________________
    string equac2(string func){
      int i = 0;
      int c = 0;
      int p = func.find('(') + 1;
      int s = func.length() - p - 1;

      string equac2 = func.substr(p,s);

      return equac2;
}
//(END)Seleciona a segunda parte da equação:____________________________________

//Deriva a segunda parte:_______________________________________________________
void deriv(string func){
    string deriv;
    int i = 0;
    int c = 0;


  //Verifica se possui "^":_____________________________________________________
    while(equac2(func)[i] != '^'){
      i++;
      c++;
      if(i > equac2(func).length()){
        break;
      }
    }
  //(END)Verifica se possui "^":________________________________________________

      i = 0;
      int q = 0;
    //Verifica se possui "+":___________________________________________________
    while(equac2(func)[i] != '+'){
      i++;
      q++;
       if(i > equac2(func).length()){
        break;
      }
    }
    //(END)Verifica se possui "+":______________________________________________


    //deriva quando possui "+":_________________________________________________
      if(equac2(func)[q] == '+'){
        char s = equac2(func)[c+1] - 1;
        int f = equac2(func)[c+1] - 48;
        int h = equac2(func)[c-2] - 48;
        cout << (f*h) << equac2(func)[c-1] << "^" << s;
      }
    //(END)deriva quando possui "+":____________________________________________


    //deriva quando possui "^":_________________________________________________
      else if(equac2(func)[c] == '^'){
      char s = equac2(func)[c+1] - 1;
      int f = equac2(func)[c+1] - 48;
      int h = equac2(func)[c-2] - 48;
      cout << (f*h) << equac2(func)[c-1] << "^" << s;
      }
    //(END)deriva quando possui "^":____________________________________________


    //Deriva quando for simples:________________________________________________
      else{
        cout << equac2(func)[0];
      }
    //(END)Deriva quando for simples:___________________________________________

//(END)Deriva a segunda parte:__________________________________________________


}
