#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct contact
{
       char name[40];
       int ID;
       char number[11];
}Diego, contactid[2] = {"Daniel Bladimir", 2, "7153154",
                        "Mara Galilea", 3, "7153154"};
int main(int argc, char *argv[])
{
  strcpy(Diego.name, "Diego Serrano Gomez");
  Diego.ID = 1;
  strcpy(Diego.number, "3781105996");
  puts(Diego.name);
  puts(Diego.number);
  puts(contactid[1].name);
  system("PAUSE");	
  return 0;
}
