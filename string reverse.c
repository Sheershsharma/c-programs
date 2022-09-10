
#include <stdio.h>
#include<string.h>

int
main (void)
{
  printf ("sheersh sharma\n 2100290120155\n");
  char mystr[20];
  int len, i;
  printf ("enter a string \n");
  scanf ("%s", mystr);
  //len = strlen (mystr);
  for (len = 0; mystr[len] > 0; ++len);
 
    printf("Length of Str is %d\n", len);

  printf ("the reversed string is \n");
  for (i = len - 1; i >= 0; i--)
    {


      printf ("%c", mystr[i]);
    }
  return 0;
}


