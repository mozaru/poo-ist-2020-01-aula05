#include<iostream>
#include"ex0-poligono.h"

using namespace std;

int main()
{
   TPoligono p;
   cout << "Bem vindo ao programa de calculo do perimetro" << endl;
   cout << "voce deve entrar com os vertices do poligono" << endl;
   p.ler(); 
   cout << "perimetro - " << p.perimetro() << endl; 
   cout << "Fim do programa." << endl;
   return 0;
}
