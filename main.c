#include <stdio.h> //printf and scanf
#include <ctype.h> // för toupper och räkna medelvärdet
typedef struct {    //typedef eftersom att det är enklare att skriva "Elev" istället för "struct Elev"
    char namn[11]; //max 10 tecken + null-terminator
    int provpoäng[13]; //13 provpoäng totalt
    double medelvärde; //double eftersom det kan vara ett decimaltal
} Elev;

int main() {
    Elev elever[5];

    for (int i = 0; i < 5; i++) // for loop som maxar antalet elever till 5
    {scanf ("%10s", elever[i].namn); //scannar 10 string tecken max, lägger in det i elevernas namn
        for (int j = 0; j < 13; j++) // for loop som maxar antalet provpoäng till 13
        {scanf("%d", &elever[i].provpoäng[j]); //scannar en int med %d och lägger in det provpoängen i elevernas värde j
        }
    }
for (int i = 0; i < 5; i++) {
    elever[i].namn[0] = toupper(elever[i].namn[0]);
    printf ("%s\n", elever[i].namn);
    }    

    
    return 0;
}

