#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int n;
int a [255][255];
scanf(«%d», &n);
srand(time(NULL));
for (int i = 0; i<n; i++)
{
printf(«\n»);
for (int j = 0; j < n; j++)
{
a[i][j] = rand() % (100+1) + 1;
printf(«%d «, a[i][j]);
}
}
int max = 0, jmax = 0;
printf(«\n»);
for (int i = 0; i<n; i++)
{
for (int j = 0; j < n; j++)
{
if (a[i][j] > max)
{
max = a[i][j];
jmax = j;
}
}
}
printf(«%d — %d», jmax+1, max);
return 0;
}
