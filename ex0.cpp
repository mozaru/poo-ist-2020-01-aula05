#include<iostream>
#include"ex0-poligono.h"

using namespace std;

int main()
{
   TPoligono p;
   p.ler(); 
   cout << "perimetro - " << p.perimetro(); 
   return 0;
}
