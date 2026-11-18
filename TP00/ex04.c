#include <stdio.h>
int main(void) {
int T;
int heures;
int minutes;
int secondes;
T = 903219;
heures = T / 3600;
minutes = (T % 3600) / 60;
secondes = T % 60;
printf("Nombres d'heures :%d\n", heures);
printf("Nombres de minutes:%d\n", minutes);
printf("Nombres de secondes:%d\n", secondes);
return (0);
}
