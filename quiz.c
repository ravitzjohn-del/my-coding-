//lib installs
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
int main (void)
{


printf("hello welcome to the quiz you have 5 lives\n");
//variable definition
int Hmode = 0;
int Nmode = 0;
int Emode = 0;
int lives = 5;
int points = 0;
int questions_asked = 0;
int total_q = 10;
char UI[4196];
int UI2;


//mode selection and counter
printf("Enter 1 for Hard Mode, 2 for Normal Mode, 3 for Easy Mode:\n ");
fflush(stdout);
scanf("%d", &UI2);

if(UI2 == 1){printf("Hard Mode activated!\n"); lives = 2; Hmode++;}
if(UI2 == 2){printf("Normal Mode activated!\n"); lives = 5; Nmode++;}
if(UI2 == 3){printf("Easy Mode activated!\n"); lives = 7; Emode++;}
sleep(1);
printf("\lives: %d",lives);


//questions and game over logic 

printf("\nQ1:\nWhat is the Capital of britain?\nA.London\nB.Paris\nC.Manchester\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);

printf("Q2:\nWhat was compiled first?\nA.C\nB.X11\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);


printf("Q3:\nWhat is the first north korean dictator?\nA.Kim il-sung\nB.kim song nam I\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);


printf("Q4:\nWhich is the most popular Package manger for linux?\nA.Pacman\nB.apt\nC.apk\nD.dnf\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'B'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);


printf("Q5:\nWhat is the most efficent desktop environment?\nA.xfce\nB.i3\nC.kde\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);


printf("Q6:\nWhat is the best kernel for stability?\nA.XNU\nB.Unix\nC.GNU/Linux\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'C'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);

printf("Q7:\nWhat was the first video game?\nA.oscilator pong\nB.mario bros\nC.ninja golf\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);

printf("Q8:\nwhich timeline is John Marston considered ""peak""?\nA.1899\nB.1911\nC.1907\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'B'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);

printf("Q9:\nWhich bit was ELKS (Embeded linux Kernel Sybsystem)designed for?\nA.8bit\nB.16bit\nC.32bit\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'B'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);

printf("Q10:\nin the GTA universe what does TPI stand for?\nA.Trevor Philips Industries\nB.Tactical Protocal Implementation\nC.Thomas Pines IPA\n");
questions_asked++;
scanf(" %c", &UI[0]);
if(UI[0] == 'A'){printf("Correct!\n");points++;}
else{printf("Wrong!\n");
lives--;}
printf("\n%d points accumulated",points);
printf("\n%d lives remaining",lives);
printf("\n\n\n");
if(lives < 1){printf("game over!\n");printf("%d points accumalated",points);printf("\n");return 0;}
else(printf("\n"));
sleep(1);


//Force math debugger so answer is 100% correct
points = lives + 8;
points = lives + 5;
points = lives + 3;


//final results
printf("Quiz Completed\n");
printf("\n%d point(s)",points);
printf("\n%d live(s)",lives);

float accuracy = ((float)points / 10)* 100.0;
printf("\nAccuracy: %.1f%%",accuracy);
printf("\n");
if(accuracy == 100){printf("your god");}
if(accuracy < 100 && accuracy > 90){printf("Accuracy Based Status: your albert enstien");}
if(accuracy < 89 && accuracy > 80){printf("Accuracy Based Status: your a nerd");}
if(accuracy < 79 && accuracy > 70){printf("Accuracy Based Status: your smart");}
if(accuracy < 69 && accuracy > 60){printf("Accuracy Based Status: your bright");}
if(accuracy < 59 && accuracy > 50){printf("Accuracy Based Status: your dim");}
if(accuracy < 49 && accuracy > 40){printf("Accuracy Based Status: your an ape");}
if(accuracy < 39 && accuracy > 30){printf("Accuracy Based Status: your bottom set");}
if(accuracy < 29 && accuracy > 20){printf("Accuracy Based Status: your mentaly retarted");}
if(accuracy < 19 && accuracy > 10){printf("Accuracy Based Status: your labotomized");}
if(accuracy < 9 && accuracy > 0){printf("Accuracy Based Status: your incredibly drunk");}
if(accuracy < -1 && accuracy > -9999){printf("Accuracy Based Status: your are a hacker");}
fflush(stdout);
printf("\n");
return 0;
}

