#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int tablica[10][10], i, k, zarodek;
int maximum = 0;
zarodek=time(NULL);
srand(zarodek);
for(i=0;i<10;i++)
{
    for(k=0;k<10;k++)
    {
    tablica[i][k] = rand()%100;
    printf("%d\t",tablica[i][k]);
	    if (tablica[i][k] > maximum)
	    maximum = tablica[i][k];
    }
printf("\n");
}
if (i=k)
{
printf("tablica[i][k]");
}
printf("najwieksza wartosc to: %d\n", maximum);
//printf("%d. tablica losowe liczby = %d\n", i, tablica[rand()%100]);
return 0;
}