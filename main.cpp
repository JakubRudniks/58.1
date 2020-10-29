#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	int liczbaRekordow=0;
	int=rekord;
 ifstream file; 
 ofstream fileOut; 
  ifstream file; 
 ofstream fileOut0;
  ifstream file2; 
 ofstream fileOut20;
 char* endptr; 
 long liczba, 
 long max; 
 long liczba2;
 long liczba3;
 long max;
 long max2;
 long max3;

 
 string liczba1, liczba2,liczba3,liczba4,liczba5,liczba6;
 
 file.open("dane_systemy1.txt"); 
 fileOut.open("wyjscie.txt"); 
 file.open("dane_systemy2.txt"); 
 fileOut.open("wyjscie.txt"); 
 file.open("dane_systemy3.txt"); 
 fileOut.open("wyjscie.txt");

 
file>>liczba1 >> liczba2;
file2>>liczba3 >> liczba4;
file3>>liczba5>> liczba6;
  bool pierwszy = true;
 
 
 if(file.good())  
     while(!file.eof()&& !file.eof() !file.eof() )       
     {
               file>>liczba1 >> liczba2;  
               plik>>liczba2>>liczba3;
               plik2>>liczba4>>liczba5;
               liczba =  strtol(liczba2.c_str(), &endptr, 6);
               liczba2 =  strtol(liczba2.c_str(), &endptr, 6);
               liczba3 =  strtol(liczba2.c_str(), &endptr, 6);
              
              if(pierwszy)
              {
              	max = liczbaI;
              	max2 = liczbaII;
              	max3= liczbaIII;
			  }
			    else 
                  if(liczbaI > max) {
				  }
                  max = liczbaI; 
                  bool rekord1 = false;
                  
			  
               else 
                  if(liczbaII > max) {
				  }
                  max = liczbaII; 
                  bool rekord1 = false;
                  
                  
                else 
                  if(liczbaIII > max) {
				  }
                  max = liczbaIII; 
                  bool rekord1 = false;
              }
              if(rekord1||rekord2||rekord3){
              	liczbaRekordów++;
			  }
              }
     }
 fileOut<< "58.1: " << max <<endl; 
  plik0<< "58.1: " << max <<endl; 
   plik20<< "58.1: " << max <<endl; 
 file.close();
 fileOut.close();
  file.close();
 fileOut.close();
  file.close();
 fileOut.close();
 return 0;
}
