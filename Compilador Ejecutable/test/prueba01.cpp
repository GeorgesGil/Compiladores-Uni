#include <stdio.h>
#include <string.h>

int main()
{

 int n,num,total,entra;
 double promedio;
  
entra=0;

printf ("Promedio de Numeros" ); 

while( entra<1){

printf ("\nCuantos Numeros Planea Sumar: " ); 

scanf ("%d",&n); 

for(int i=1 ; i <= n;i++){

printf ("Dame el numero [%d]:  ",i ); 

scanf ("%d",&num); 
total=total+num;

}
entra=entra+1;

} 
promedio=total/n;

printf ( "El promedio fue: %f ",promedio ); 
total=0;
promedio=0;

}