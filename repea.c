#include <stdio.h>

 main()
{
	int num[10]={45,25,65,25,54,54};
    int repeat,i,j,count=0,a;
    for(i=0;i<=9;i++)
    {
        repeat=num[i];
        for(j=0;j<=9;j++)
        {
           if(a==repeat)
           {
               break;
           }

            if(repeat==num[j] && i!=j)
                {
                count++;
                a=repeat;
                
                break;
                }
            
               
        }
        
        if(count==2)
            {
             break;
            }
           
    }
    printf("second repeating number is %d",repeat);
	
}