#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char str2[26];
  for (int c=0; c<26; c++)

    str2[c] = 'a' + c;

   printf("str1 = %s\n",str1);
   printf("str2 = %s\n",str2);

  if (strcmp (str1, str2) ==0)

   printf("the strings are identical\n");

  else
 
   printf("the strings are not identical\n");

  for (int i=0; i<26; i++)
{ 
  str2[i] = str2[i] - 32;
  
}
  printf("str2 = %s\n",str2);

   if (strcmp (str1, str2) == 0)

  printf("the strings are identical\n");
 
  else

   printf("the strings are not identical\n");
   printf("str2 = %s \n",str2);
char str3[52];
char str4[52];
//strcpy(str4, str1);
//strcpy(str3, str2);
strcpy(str3, str1);
strcpy(str4, str2);
strcat(str3, str4);
printf("str3 = %s\n",str3);
//printf("str2 = %s\n",str2);
printf("str1 = %s\nstr2 = %s\nstr3= %s \n",str1, str4, str3);
}
