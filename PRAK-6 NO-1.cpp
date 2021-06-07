//MUHAMMAD AULIYA'UR RAHMAN
//20051397066
//MI 2020 B

#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("MUHAMMAD AULIYA'UR RAHMAN'\n");
 printf("20051397066\n");
 printf("MI 2020 B\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
