#include<iostream>
#include"ex0-vertice.h"
#include"ex0-poligono.h"

using namespace std;

void TPoligono::ler()
{
   cout << "Entre com a quantidade de vertices:"; 
   cin >> qtd;
   for(int i=0;i<qtd; i++)
   {
      cout << "Vertice " << i+1 << " de " << qtd << endl;
      v[i].ler(); 
   }
}
float TPoligono::perimetro()
{
   float soma=0;
   if (qtd>0)
   {
      soma = v[qtd-1].dist(v[0]);
      for(int i=0; i< qtd-1; i++)
        soma += v[i].dist(v[i+1]); 
   }
   return soma;
} 

