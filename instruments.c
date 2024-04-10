#include <stdio.h>

struct Instrumentalist{
int rollNo;
char name[20];
char instrument[20];
};
int struct_det(struct Instrumentalist S[]);
int main(){
    printf("Enter Roll number, person's name and instrument, respectively for 10 individuals:\n");
  struct Instrumentalist S[10];
  for(int i=0;i<10;i++)
    {
      scanf("%d %s %s",&S[i].rollNo,S[i].name,S[i]. instrument);
    }
    int result=struct_det(S);
return 0;

}
int struct_det(struct Instrumentalist S[])
{
    for(int i=0;i<10;i++)
   {
     printf("%d: %s: %s \n",S[i].rollNo,S[i].name,S[i]. instrument);
   }
}
