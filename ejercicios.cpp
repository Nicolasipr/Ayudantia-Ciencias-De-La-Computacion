#include <iostream>

using namespace std;

int main(){


  int N;
  cin >> N; // size of array with N elements



  int arreglo[N],
      arregloCuadrado[N],
      sumaPares = 0,
      menor = 100000;

  float promedio = 0;

  for(int i = 0; i < N; i++){

    cin >> arreglo[i];
    if(arreglo[i]%2 == 0){
      cout << arreglo[i] << " ";
      sumaPares += arreglo[i];

    }
    if(menor > arreglo[i])
      menor = arreglo[i];

    promedio += arreglo[i];

    arregloCuadrado[i] = arreglo[i]*arreglo[i];

  }


  for(int i = 0; i < N; i++){


  }
    cout << "Su promedio es : " <<  promedio/N << endl
         << "La suma de numeros pares es: " << sumaPares << endl
         << "El menor es : " << menor << endl;



  return 0;

}
