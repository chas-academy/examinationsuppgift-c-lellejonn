#include <stdio.h> //printf and scanf
#include <ctype.h> // för toupper
typedef struct {    //typedef eftersom att det är enklare att skriva "Elev" istället för "struct Elev"
    char namn[11]; //max 10 tecken + null-terminator
    int provpoäng[13]; //13 provpoäng totalt
    double medelvärde; //double eftersom det kan vara ett decimaltal
} Elev;

int main() {
    Elev elever[5]; // skapat array av 5 elever, med index 0 - 4.

    for (int i = 0; i < 5; i++) // for loop som maxar antalet elever till 5
    {scanf ("%10s", elever[i].namn); //scannar 10 string tecken max, lägger in det i elevernas namn
        for (int j = 0; j < 13; j++) // for loop som maxar antalet provpoäng till 13
        {scanf("%d", &elever[i].provpoäng[j]); //scannar en int med %d och lägger in det provpoängen i elevernas värde j
        }
    }
for (int i = 0; i < 5; i++) {
    elever[i].namn[0] = toupper(elever[i].namn[0]);
    int summa = 0;  

    for (int j = 0; j < 13; j++) { //räknar ut medelvärdet. börjar med summan = elevernas provpoäng loopat 13 gånger.
        summa += elever[i].provpoäng[j];
    }     elever[i].medelvärde = summa / 13.0; // decimaltal på 13:0 för att få ett decimaltal som resultat

    
    }    
    
    int vinnar_index = 0; //skriva ut högsta medelvärdet.
    double högsta_medel = -1.0; //negativt för att försäkra att elevernas värde kommer vara högre

    for (int i = 0; i < 5; i++) {
        if (elever[i].medelvärde > högsta_medel) 
        { högsta_medel = elever[i].medelvärde; //sparas till elevens index.
        vinnar_index = i;} // högsta medelvärdet sparas i värdet i efter att den har gått igenom alla elever
    }
    
        printf("%s\n", elever[vinnar_index].namn); //vinnar index så att print skriver rätt elevs index nummer, ie namnet.

        double grupp_summa = 0.0; // grupp_summa slår ihop medelvärdena på alla elever. följt av grupp_snittvärde som delar med 5.
        for (int i = 0; i < 5; i++) {
            grupp_summa += elever[i].medelvärde;
        } double grupp_snittvärde = grupp_summa / 5.0;
    
        for (int i = 0; i < 5; i++) {
            if (elever[i].medelvärde < grupp_snittvärde) { //programmet kollar om elevens medelvärde är under snittet, och i så fall skriver ut.
                printf("%s\n", elever[i].namn); //skriver ut.
                 
            }
        }
    
        return 0;
}

