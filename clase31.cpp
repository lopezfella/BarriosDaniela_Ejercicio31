#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  
  double D = ;
  double Nx = 10;
  double t_max = 1.0;
  double delta_x = 2.0;
  double delta_t = ((delta_x)**2)/2*D;
  int i, j;
  double psi_0 = 0;
  int t = 0;
  double old[Nx];
  double new[Nx];
  int itera = 0;

  ofstream outfile;
