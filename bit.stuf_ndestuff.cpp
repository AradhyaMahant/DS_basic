#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int chartodecimal(char str[100])
{
	  int i,j,c;
	  for(i=0;str[i]!='\0';i++)
	  {
	  		c=str[i];
	  		for(j=7;j+1>0;j--)
	  		{
	  			if(c>=(1<<j))	
				 {			
		     	    return 1;
			     }
				else
				{
			    	return 0;
				}
				
			}
	  }
	
}
int main()
{
  char temp;
  int c;
  char *p,*q;
  char in[200];
  char stuff[200];
  char destuff[200];
  
    int count=0;
  
  printf("enter character string (0 & 1 only):\n");
  scanf("%s",in);
	
	chartodecimal(in);
	  
  p=in;
  q=stuff;
  
  while(*p!='\0')
  {
    if(*p=='0')
    {
      *q=*p;
      q++;
      p++;
    }
    else
    {
      while(*p=='1' && count!=5)
      {
        count++;
        *q=*p;
        q++;
        p++;
      }
      
      if(count==5)
      {
        *q='0';
        q++;
      }
      count=0;
    }
  }
  *q='\0';
  printf("\nthe stuffed character string is");
  printf("\n%s",stuff);
  
  p=stuff;
  q=destuff;
  while(*p!='\0')
  {
    if(*p=='0')
    {
      *q=*p;
      q++;
      p++;
    }
    else
    {
      while(*p=='1' && count!=5)
      {
        count++;
        *q=*p;
        q++;
        p++;
      }
      if(count==5)
      {
        p++;
      }
      count=0;
    }
  }
  *q='\0';
  printf("\nthe destuffed character string is");
  printf("\n%s\n",destuff);
  return 0;
}
