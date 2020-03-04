#include<iostream>
#include<math.h>

using namespace std;

//----------------------  prototipo das classes  ----------------------
class TVertice
{
   private:
      float x,y;
   public:
      void ler();
      float dist(TVertice A); 
};

class TPoligono
{
    private:
      TVertice v[100];
      int      qtd;
    public:
      void ler();
      float perimetro(); 
};

//----------------------  implementacao das classes  ----------------------
void TVertice::ler()
{
    cout << "X:";
    cin >> x;
    cout << "Y:";
    cin >> y;   	
}
float TVertice::dist(TVertice A)
{
    return sqrt ( pow( x-A.x , 2) + pow(y-A.y , 2) );    
}
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

/*   for(int i=0; i< qtd; i++)
       soma += v[i].dist(v[(i+1) % qtd]); 
*/ 
   return soma;
} 

 

int main()
{
   TPoligono p;
   p.ler(); 
   cout << "perimetro - " << p.perimetro(); 
   return 0;
}
