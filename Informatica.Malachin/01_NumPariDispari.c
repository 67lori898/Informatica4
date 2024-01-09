#include &lt;stdio.h&gt;
int main()
{
//Dichiariamo e inizializziamo gli array e le variabili
int n2=1;
int numeri[30]; // Array per contenere i numeri inseriti
int N; // Numero di elementi
int i; // Variabile contatore
int sommaPari = 0; // Variabile per la somma dei numeri pari
int sommaDispari = 0; // Variabile per la somma dei numeri dispari
int contatorePari = 0; // Variabile per contare i numeri pari
int contatoreDispari = 0; // Variabile per contare i numeri dispari
float mediaPari, mediaDispari; // Variabili per la media dei numeri pari e dispari
/*Iteriamo il codice all&#39;interno di un ciclo do-while, perchè se l&#39;utente inserisci un numero maggiore
di 30 o minore di 0 li richiediamo i numero di elementi. */
do
{
// Chiedi all&#39;utente di inserire il numero di elementi
printf(&quot;\n Inserisci il numero di elementi (non superiore a 30): &quot;);
scanf(&quot;%d&quot;, &amp;N);
if(N&gt;30)
{
printf(&quot;Hai inserito un numero maggiore di 30.Perfavore reinserisci il numero.&quot;);
}
if(N&lt;0)
printf(&quot;Hai inserito un numero minore di 0.Perfavore reinserisci il numero.&quot;);

}while(N&gt;30||N&lt;0);

// Chiedi all&#39;utente di inserire i numeri, che andremo a caricare all&#39;interno di ogni posizione del vettore
printf(&quot;Inserisci i numeri:\n&quot;);

for (i = 0; i &lt; N; i++)
{
printf(&quot;Inserisci il %d° numero: &quot;,n2);
scanf(&quot;%d&quot;, &amp;numeri[i]);
n2++;
/*Ad ogni acquisizione di un valore in una determinata posizione del vettore,
incrementiamo di 1 l&#39;indice della posizione, finche l&#39;indice è minore di N(la variabile
del numero di elementi)*/
}

for (i = 0; i &lt; N; i++) //Sommiamo alla variabile sommaPari ogni valore pari che avro inseito, che il
nostro programma verifichera tramite un ciclo di selezione
{
if(numeri[i] % 2 == 0) //Verifichiamo se il numero è pari
{
sommaPari=sommaPari+numeri[i];
contatorePari=+1; //Ad ogni valore pari inseirto, incrementiamo di 1 la variabile contatorePari

}
else //Se il numero non è pari è dispari, quindi alla variabile sommaDispari andremo a sommare i
numeri dispari
{
sommaDispari=sommaDispari+numeri[i];
contatoreDispari=+1;
}
}
// Calcola la media dei numeri pari e dispari (se ci sono)
if (contatorePari &gt; 0) {
mediaPari = sommaPari / (float)contatorePari;
} else {
mediaPari = 0;
}

if (contatoreDispari &gt; 0) {
mediaDispari = sommaDispari / (float)contatoreDispari;
} else {
mediaDispari = 0;
}
// Stampa i risultati
printf(&quot;Somma dei numeri pari: %d\n&quot;, sommaPari);
printf(&quot;Media dei numeri pari: %.2f\n&quot;, mediaPari);
printf(&quot;Somma dei numeri dispari: %d\n&quot;, sommaDispari);
printf(&quot;Media dei numeri dispari: %.2f\n&quot;, mediaDispari);

return 0;
}