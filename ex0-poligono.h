#ifndef _EX0_POLIGONO_H_
#define _EX0_POLIGONO_H_
#include"ex0-vertice.h"

class TPoligono
{
    private:
      TVertice v[100];
      int      qtd;
    public:
      void ler();
      float perimetro(); 
};
#endif

