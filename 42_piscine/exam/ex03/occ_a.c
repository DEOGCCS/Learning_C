//#include <stdio.h>

int occ_a(char *str)
{
  int i = 0;
  int nb = 0;
  
  while (str[i] != '\0')
  {
    if (str[i] == 'A'). //selects the 'A' character.
    {
      nb++; //runs the count of A character
    }
    i++; //runs the string
  }
  return(nb); // returns the total number of A characters 
}
/*
int main(void)
{
char *str = "pirnt a e A A";
printf("%d", occ_a(str));
return (0);
}*/