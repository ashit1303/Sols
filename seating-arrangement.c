#include <stdio.h>

int main(){
	int temp,fr,x,b,i,t,num,arr[100000];
	char a[6]={'W','W','M','A','A','M'};
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d", &num);
		arr[i]=num-1;
	}
	for(i=0;i<t;i++){
	    
		b=arr[i]%12;     
		temp=arr[i]-b;
		x=12-b;  
		temp=temp+x;
	    
	    fr=(temp)%6;
		printf("%d %cS\n", temp,a[fr]);
	}      
}
