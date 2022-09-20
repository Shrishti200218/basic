
#include<stdio.h>




int main()
{
    char str[10][10],str1[10][10],c[20][20];
    int n1,n2,n,k=0,i,j;
    
    
    
    printf("Enter number of element of set A\n");
    scanf("%d",&n1);
    printf("Enter elements of set A\n");
    for(i=0;i<n1;i++)
    {
      scanf("%s",str[i]);
    }
    printf("Enter number of element of set B\n");
    scanf("%d",&n2);
    printf("Enter elements of set B\n");
    for( i=0;i<n2;i++)
      scanf("%s",str1[i]);
      
   
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(strcmp(str[i],str1[j])==0)
            {
               strcpy( c[k],str1[i]);
                k++;
            }
         }
        
    }
    
   
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<k;i++)
      printf("%s ",c[i]);
    
    return 0; 
}
