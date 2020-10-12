#include <iostream>

using namespace std;

int *  CrearArreglo(size_t n);
void LlenarArreglo(int *pA,size_t n);
void   Imprimir(int *pA, size_t num);

void LiberarMemoria(int * &pA);

int main()
{
  size_t num=0;
  int * pA= nullptr;
  size_t m5=0,m7=0;
  int *pA5= nullptr;
  int *pA7= nullptr;

  srand(time(nullptr));
  cout << "Numero de elementos: ";
  cin >> num;
  pA = CrearArreglo(num);
  LlenarArreglo(pA, num);
  Imprimir(pA, num);


  LiberarMemoria(pA);
  LiberarMemoria(pA5);
  LiberarMemoria(pA7);
  return 0;
}

int *  CrearArreglo(size_t n)
//---------------------------
{
  return (new int[n]());
}

void LlenarArreglo(int *pA,size_t n)
//----------------------------------
{
  for(int i=0; i<n; i++)
    pA[i] = rand()%999+1;
}

void   Imprimir(int *pA, size_t num)
//-----------------------------------
{
  cout << "\n";
  for(int i=0; i<num; i++)
    cout << "pA[" << i << "] = " << pA[i]<<"\n";
}

void LiberarMemoria(int * &pA)
{
  delete[]pA;
  pA = nullptr;
}
