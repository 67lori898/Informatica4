#include <stdio.h>
#include <string.h>

int main()
{
    //Dichiarazione e inizializzazione delle variabili
    char denominazione[50]; //l'utente puo scrivere una denominazione che contiene al massimo 50 caratteri
    int continua;
    float prezzo; 
    float sommaPrezzi = 0;
    float mediaPrezzi = 0;
    float prezzoMax = 0, prezzoMin = 0;
    float mediaIntervallo= 0;
    int mediaCount = 0;
    float sommaPrezziIntervallo = 0;
    int countIntervallo =0;
    int countTot=0;
    int max=0;
    int num=0;
    int min=0;
  
    //ciclo do-while l'utente digita 2 = stop
    do{ 
        //ciclo do-while l'utente digita un numero positivo nel caso in cui digita prezzi < 0
        do{
            //Chiedo all'utente di inserire una denominaziome (denominazione = nome azione)
            printf("Inserisci il nome della denominazione: ");
            scanf("%s", denominazione);
            
            //Chiedo all'utente di inserire il prezzo della denominaziome
            printf("Inserisci il prezzo dell'azione %s: ", denominazione);
            scanf("%f", &prezzo);
            
            //Se l'utente ha inserito un prezzo negativo, gli dico di inserirne uno positivo
            if (prezzo <= 0) {
                do{
                    printf("non puoi inserire un prezzo negativo! inserisci un prezzo positivo: ");
                    scanf("%f", &prezzo);
                }while(prezzo <= 0);
                
            }
            //media prezzi nell'intervallo compreso tra 2,50 e 3,50 euro, estremi inclusi.
            if (prezzo >= 2.50 && prezzo <= 3.50) {
            sommaPrezziIntervallo = sommaPrezziIntervallo + prezzo;
            countIntervallo++;
            mediaIntervallo = sommaPrezziIntervallo / countIntervallo;
            }
            countTot++;
                    
            //ricaviamo il prezzo minimo e il prezzo massimo
            if (countTot == 0 || prezzo > prezzoMax) 
              {
              prezzoMax = prezzo;
              }
              else if (countTot == 0 || prezzo < prezzoMin) 
               {
               prezzoMin = prezzo;
               }
        }while(prezzo <= 0);
        
        //aggiornamenti per ogni ciclo
        sommaPrezzi = sommaPrezzi + prezzo;
        mediaPrezzi = mediaPrezzi + prezzo;
        //utilizzo la variabile mediaCount perchè mi serve per quando calcolerò la media
        mediaCount++; 
    
        

        
        
        
        
        
        
        
        //Chiedo all'utente se vuole inserire un'altra denominazione
        printf("vuoi inserire un'altra denominazione? \n (1) Si \n (2) No \n");
        printf("risposta: ");
        scanf("%d", &continua);
        
    }while(continua!= 2); //condizione da chiedere
    
    //media prezzi
    if (mediaCount > 0) {
        mediaPrezzi= mediaPrezzi / mediaCount;
    }
    
    //mostro in output le informazioni 
    printf("La somma dei prezzi delle azioni è: %.2f ?\n", sommaPrezzi);
    printf("La media dei prezzi delle azioni è: %.2f ?\n", mediaPrezzi);
    printf("L’azione con il prezzo massimo è: %.2f ?\n", prezzoMax);
    printf("L’azione con il prezzo minimo è %.2f ?\n", prezzoMin);
    //stampo in output la media delle azioni nell'intervallo [2.50, 3.50] solo se ci sono valori in questo range
    if(countIntervallo > 1){
         printf("La media dei prezzi delle azioni nell'intervallo [2.50, 3.50] euro è: %.2f\n", mediaIntervallo);
    }
    
   
    return 0;
}
