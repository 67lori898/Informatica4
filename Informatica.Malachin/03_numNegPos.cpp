#include <stdio.h>
int main()
{
  int sommaPositivi=0;
  int sommaNegativi=0;
  int mediaN=0; 
  int mediaP=0;
  int contPos=0;
  int contNeg=0;
  int elementi=0; 
  int numero=0;
  int numeriNeg=0;
  int numeriPos=0; 
  do{
  printf("Inserisci il numero di elementi  che vuole inserire:");
  scanf("%d",&elementi);
  }while(elementi<1);
   for(int i=1; i<=elementi; i++)
   {
     
     printf("Inserisci il %d° valore: ",i);
     scanf("%d",&numero);
     if(numero>=0)
     {
      numeriPos =numeriPos+numero;
      contPos++;
      }
     else if(numero<0)
     {
     numeriNeg=numeriNeg+numero;
     contNeg++;
     }
     
   }
     sommaPositivi= numeriPos + 0;
     sommaNegativi= (numeriNeg + 0)*-1;
     mediaP= sommaPositivi/contPos;
     mediaN= sommaNegativi / contNeg;
     printf("\nLa somma dei numeri negativi (in valore assoluto)è: %d",sommaNegativi);
     printf("\nLa somma dei numeri positivi è: %d",sommaPositivi);
     printf("\nI numeri negativi inseriti sono: %d",contNeg);
     printf("\nI numeri positivi inseriti sono: %d",contPos);
     printf("\nLa media dei numeri negativi inseriti è: %d",mediaN);
     printf("\nLa media dei numeri positivi inseriti è: %d",mediaP);

   }
