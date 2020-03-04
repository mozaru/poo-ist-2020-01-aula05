#include<iostream>
#include<math.h>
#include"ex0-vertice.h"

using namespace std;

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

