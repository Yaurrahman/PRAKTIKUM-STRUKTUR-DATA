//MUHAMMAD AULIYA'UR RAHMAN
//20051397066
//MI 2020 B
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
for(int i=0;i<20;i++){
 cout<<A[i]<<" ";
}
cout<<"MUHAMMAD AULIYA'UR RAHMAN\n";
cout<<"20051397066\n";
cout<<"MI 2020 B\n";
cout<<"\nData yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}
