#include<stdio.h>
int main (){
    int scelta;
    int prezzoIns= 0; 
    int Sconto=0;
    int prezzoScontato;
   
do{
    printf("Inserire il prezzo di un importo: ");
    scanf("%d",&prezzoIns);
    if(prezzoIns>=0&&prezzoIns<=500)
    {
       Sconto= (prezzoIns/100)*10; 
       prezzoScontato= prezzoIns - Sconto;
       printf("Lo sconto applicato al prezzo %d è del 10 percento quindi il prezzo scontato è %d: ",prezzoIns, prezzoScontato);
      
    }
    else if(prezzoIns>=501&&prezzoIns<=1000)
    {
          Sconto= (prezzoIns/100)*20; 
          prezzoScontato= prezzoIns- Sconto;
       printf("Lo sconto applicato al prezzo %d è del 20 percento quindi il prezzo scontato è %d: ",prezzoIns,prezzoScontato);

    }
     else{
       Sconto = (prezzoIns/100)*30; 
       prezzoScontato= prezzoIns- Sconto; 
       printf("Lo sconto applicato al prezzo %d è del 30 percento quindi il prezzo scontato è %d: ",prezzoIns,prezzoScontato);

     }
     printf("\n Vuoi inserire un'ulteriore importo per calcolare lo sconto? Digita 1 per continuare oppure digita 2 per uscire.");
     scanf("%d",&scelta); 

   }while(scelta==1); 

 printf("Arriverderci, alla prossima.");
 //Vuoi inserire un altro importo oppure no?


}