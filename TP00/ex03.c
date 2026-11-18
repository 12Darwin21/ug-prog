#include <stdio.h>
int main(void) {
 int cote;
 int perimetre;
 int surface;
 cote = 6;
 perimetre = cote * 4;
 surface = cote * cote;
 printf("Périmètre du carré : %d\n", perimetre);
 printf("Surface du carré : %d\n", surface);
 return 0;
}