// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>




int main(void) {
int e = 0;
int ms = 1;
int bs = 0;
int ts = 0;
int BA = 0;
int BB = 0;
int BC = 0;
int BD = 0;
int TBA = 0;
int TBB = 0;
int TBC = 0;
int TBD = 0;
int trains = 0;
    
char ch;
srand(time(NULL));
int num = rand() % 4 + 1;
int trainAComp = rand() % 100 + 1;
int trainBComp = rand() % 100 + 1;
int trainCComp = rand() % 100 + 1;
int trainDComp = rand() % 100 + 1;


    char *locationLookup[] = {
        "Swansea",
        "Birmingham",
        "London",
        "Manchester",
        "Glasgow",
        "Cardiff",
        "Leeds",
        "Liverpool",
        "Newcastle",
        "Bristol",
        "Sheffield",
        "Lands end",
        "Edinburgh",
        "Nottingham",
        "Southampton",
        "Norwich"
    };

    int UKP1 = (rand() % 15) + 1;
    int UKP2 = (rand() % 15) + 1;
    int UKP3 = (rand() % 15) + 1;
    int UKP4 = (rand() % 15) + 1;

    char *trainStop1 = locationLookup[UKP1];
    char *trainStop2 = locationLookup[UKP2];
    char *trainStop3 = locationLookup[UKP3];
    char *trainStop4 = locationLookup[UKP4];


if(UKP1 == 1){}



while(e == 0)
{

while(ms == 1)
{
printf("\nB.booking\nT.Tracking\n");

scanf(" %c", &ch);

if(ch == 'B'){bs++;ms--;}
if(ch == 'T'){ts++;ms--;}
if(ch == 'E'){e++;ms--;}
break;



    }


//booking and tracing menus

while(bs == 1 && ms == 0)
    {

printf("available trains: ");
printf( "%d\n", num);
if(num == 4){printf("\nA\nB\nC\nD");trains = 4;}
if(num == 3){printf("\nA\nB\nC");trains = 3;}
if(num == 2){printf("\nA\nB");trains = 2;}
if(num == 1){printf("\nA");trains = 1;}

if(num > 0)
    {

fflush(stdout);
printf("\nwhich train woudl you like to book\n");
scanf(" %c", &ch);

if(ch == 'A' && trains >= 1){BA++; ms++; bs--;}
else if(ch == 'B' && trains >= 2){BB++; ms++; bs--;}
else if(ch == 'C' && trains >= 3){BC++; ms++; bs--;}
else if(ch == 'D' && trains >= 4){BD++; ms++; bs--;}
else {printf("train unavailable\n");ms++; bs--;}
break;
}
        
    
    }


while(ts == 1 && ms == 0)
 {
sleep(1);

printf("\nwhich train would you like to track press e to exit\nA\nB\nC\nD\n");
scanf(" %c", &ch);
if(ch == 'A'){TBA++;}
if(ch == 'B'){TBB++;}
if(ch == 'C'){TBC++;}
if(ch == 'D'){TBD++;}
if(ch == 'e'){ms++;ts--;}

if(TBA == 1)
{
printf("time till completion %d minutes currently at (Draw %d): %s\n", trainBComp, UKP1, trainStop1);
TBA--;

}
if(TBB == 1)
{
printf("time till completion %d minutes currently at %s\n", trainBComp, trainStop2);
TBB--;

}
if(TBC == 1)
{
printf("time till completion %d minutes currently at %s\n", trainBComp, trainStop3);
TBC--;

}
if(TBD == 1)
{
printf("time till completion %d minutes currently at %s\n", trainBComp, trainStop4);
TBD--;

}
printf("\n");


     
}


    
}

 
printf("bye");
    return 0;
}





