//Tomado de mi ejercicio 29
#include <fstream>
#include <iostream>
#include<stdio.h> 
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

void init(double *psi, int n_x);
void print(double *psi, int n_x);
void copy(double *recibe, double *entrega, int n_x);
void evolve(double *psi_new, double *psi_old, double delta_t, double delta_x, int n_x);

const double k=0.01;
const double D=40; 
const int Nx = 30; 
const double phi1=0.0;
const double phi2=0.0;

//Condiciones:
double xi = 0;
double xf = 0.1;
double phi0 = 0.0;
double ti = 0.0;
double L = 1;
double s0=1;
int dx= 0.1;

void eq(string nombre);
	
int main() 
{ 
	string nombre = "ej32.dat";
 	eq(nombre);
	return 0; 
} 

void eq (string nombre){
	ofstream file;
	file.open(nombre);
	float datosp[Nx][Nx];
	double s=s0;
	double phi = phi0;
	for (int n = 0; n < 10; n++){
		for (int j= -1; j< xf; j++){
            if(n==0){
                datosp[n][j] = 0;
			file << n <<" "<< j<< " " << datosp[n][j] << std::endl;                
                
            }
            
            else{
			float dphi = (pow(10,-4))*sin(2*M_PI*j/L);
			
			datosp[n][j]= dphi;
			file << n <<" "<< j<< " " << datosp[n][j] << std::endl;                
            }           
            
		}
	}
	file.close();
}

void init(double *psi, int n_x){
  int i;
  for(i=0;i<n_x;i++){
    psi[i] = 0.0;
  }
}


void print(double *psi, int n_x){
  int i;
  for(i=0;i<n_x;i++){
    std::cout << psi[i] << " ";
  }
  std::cout << "\n";
}
