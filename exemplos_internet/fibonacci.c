#include<stdio.h>
 #include<conio.h>
 long int i=0,j=1,f;
 int main()
 
{
     int k,r;
    
     //Taking maximum numbers form user
     printf("Enter the number range:");
     scanf("%d",&r);
     
    printf("FIBONACCI SERIES: ");
     printf("%ld %ld",i,j); //printing firts two values.
     
    for(k=2;k<r;k++){
         f=i+j;
          i=j;
          j=f;
          printf(" %ld",j);
          getch();
     }
}
