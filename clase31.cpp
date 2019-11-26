/*Código modificado del respositorio del profesor*/
#include <iostream>
#include <fstream>
#include <cmath>
#include "stdio.h"


using namespace std;

void empezamos(double *psi, int Nx);
void estoimprime(double *psi, int Nx);
void copia(double *recibir, double *dar, int Nx);
void actualiza(double *nue, double *vie, double dt, double dx, int Nx);

    
int main(int argc, char **argv){
  double *psi = NULL;
  double *pasado = NULL;
  int Nx;
  int Nt;
  int N;
  double tf=1.0;
  double dt=1.0/Nt;
  double dx = 2.0/Nx;

  Nx=atoi(argv[1]);
  Nt=atoi(argv[2]);

  dx = 2.0/Nx;
  dt = 1.0/Nt;
  
  psi  = new double [Nx];
  pasado  = new double [Nx];

  empezamos(psi, Nx);
  estoimprime(psi, Nx);
  
  for(N=1;N<Nt;N++){
    copia(pasado, psi, Nx);
    actualiza(psi, pasado, dt, dx, Nx);
    estoimprime(psi, Nx);
  }

  return 0;
}

void actualiza(double *nue, double *vie, double dt, double dx, int Nx){
  int i;
  double s=1.0;
  for(i=1;i<Nx-1;i++){
    nue[i] = vie[i];
    nue[i] += (dt/(dx * dx)) * (vie[i+1]-2*vie[i] + vie[i-1]);
    nue[i] += dt * s;
  }
  
}

void copia(double *recibir, double *dar, int Nx){
  int i;
  for (i=0;i<Nx;i++){
    recibir[i] = dar[i];
  }
}


void empezamos(double *psi, int Nx){
  int i;
  for(i=0;i<Nx;i++){
    psi[i] = 0.0;
  }
}


void imprime(double *psi, int Nx){
  int i;
  for(i=0;i<Nx;i++){
    std::cout << psi[i] << " ";
  }
  std::cout << "\n";
}
