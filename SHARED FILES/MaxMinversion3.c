#include<stdio.h>
typedef struct maxmin{
	int max,min;
}maxmin ;

maxmin maxminusingdc(int[],int,int);
maxmin maxminusingnaive(int[],int);

int naivecount=0,dccount=0;

int main()
  { maxmin result;
  	int a[]={5,3,7,2,9,1,4};
  	int n=sizeof(a)/sizeof(int),i,j;
  	i=0;
  	j=n-1;
  	printf("n= %d",n);
  	//result=maxminusingdc(a,i,j);
  	result=maxminusingnaive(a,n);
    printf("\n......................Program On Max MIN Finding with Analysis...............");
	printf("\nArray Details: ");
	for(i=0;i<n;i++)
       printf("%d, ",a[i]);
	printf("\nMaximum element is: %d",result.max);
    printf("\nMinimum element is: %d",result.min);
    printf("\n\nNaive Method Count: %d",naivecount);
    printf("\nD&C   Method Count: %d",dccount);
  return 1;
  }
  
  
maxmin maxminusingdc(int a[],int i,int j)
   { maxmin resultdc;
   	printf("\n USING DIVIDE & CONQUER");
	if(i==j)
   	 { 
	  resultdc.max=resultdc.min=a[i];
     }
   	else if(i==j-1)
	 { 
	  if(a[i]>a[j])
	    { 
	    	resultdc.max=a[i];
	    	resultdc.min=a[j];
		
		}
	  else
	   {  
	        resultdc.max=a[j];
	    	resultdc.min=a[i];
		}	
	 }  
   	else 
   	 { 
   	   int mid =(i+j)/2;
   	   
   	   maxmin resultdc1,resultdc2;
	   resultdc1=maxminusingdc(a,i,mid);
	   resultdc2=maxminusingdc(a,mid+1,j);
	   if(resultdc1.max>resultdc2.max)
	      resultdc.max=resultdc1.max;
	    else
	      resultdc.max=resultdc2.max;
	      
	    if(resultdc1.min<resultdc2.min)
		  resultdc.min=resultdc1.min;
		else
		  resultdc.min=resultdc2.min;  	     
	 }
	 
	 return resultdc;
   }
maxmin maxminusingnaive(int a[],int n)
   {  printf("\n USING NAIVE METHOD");
   	 int max,min,i;
   	 maxmin resultnaive;
   	 max=min=a[0];
   	 
   	 for (i=1;i<n;i++)
   	     {
   	       if(a[i]>max)
			  max=a[i];
		   if(a[i]<min)
		     min=a[i];	  	
		 }
     resultnaive.max=max;
	 resultnaive.min=min;
	 
	 return resultnaive;		 
   }
  
