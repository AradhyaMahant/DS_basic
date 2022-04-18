#include<stdio.h>
#include<string.h>

int main()
{
	char data[100],stuff[100],dstuff[100];
	int i,j,c=1,fsize,frames,enter,check=0;
	
	printf("enter your name in reverse");
	scanf("%s", &data);
	
	int dsize=strlen(data);
	
	printf("enter frame size");
	scanf("%d", &fsize);
		
	enter=fsize-2;
	frames=(dsize/enter);
	
	int l=dsize+(frames*2);
	
	j=0;
	for(i=0;i<l;i++)
	{
		if(i%fsize==0)
		{
			stuff[i]='x';
		}
		else if(i==(fsize*c)-1)
		{
			stuff[i]='x';
			c++;
		}
		else
		{
			if(data[j]=='\0')
				{
					check=1;
					break;
				}
			stuff[i]=data[j];
			j++;
			
		}
			if(check==1)
				stuff[l-1]='x';
		dstuff[l]='\0';
		printf("the stuffed data is: %s \n",stuff);	
//dstuff		
		j=0;
		for(i=0;i<l;i++)
		{
			if(stuff[i]!='x')
			{
				dstuff[j]=stuff[i];
				j++;
			}
		}
		dstuff[j]='\0';
		
		printf("\n\n dstuff data is",dstuff);
		return 0;
    }
}  



