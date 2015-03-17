// Author:OSCAR GARCIA AVILA
// Date:3/16/2015
// Version:0.1

/*
  Homework DD IN THIS HOMEWORK, PRINT THE CODE ASCCI WITH 32 VALUES IN EACH LINE
  this assignment ...
*/
#include <iostream>//biblioteca entrada y salida estandar
using namespace std;
int main(){
int a=259;//declaramos una variable entera de 256
 for (int i=1;i<5;i++){//numero de filas
     cout<<endl;
    for (int o=0;o<33;o++){//numero de columnas
		cout<< char (a++)<<" ";//casting para el numero entero a char
    }
 }
}
