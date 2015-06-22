#include <stdio.h>

 main()
{
	int num[10]={45,40,65,25,40,45,25,22,22,65};
    int repeat,i,j,rep[10],k;
    for(i=0;i<=9;i++)
    {
        repeat=num[i];
        for(j=0;j<=9;j++)
        {
            
           
        if((repeat==num[j] && i!=j) && j>i)
                {
            rep[i]=j-i;
            
            break;
                }
                else
                {
                    rep[i]=0;
                }
                
                
                
                }
            
              
        }
        
        for(k=0;k<=9;k++)
    {
        printf("second repeating number is %d \n\n ", rep[k]);
    }
    
    }
   
