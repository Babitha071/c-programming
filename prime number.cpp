  #include<stdio.h>
  int main(){
  	int n,flag=0,i;
  	printf("enter a number:");
  	scanf("%d",&n);
  	for(i=2;i<n;i++)
  	{
  		if(n%i!=0)
  		continue;
  		else
  		{
  			flag=1;
  			printf("not a prime");
  			break;
		  }
	  }
	  if(flag==0)
	  {
	  	printf("prime");
	  }
	  
  }
  
