    #include<stdio.h>
    int main(){
    	int n,i,j,a;
    	scanf("%d",&n);
    	for(i=0;i<n;i++){
    		scanf("%d",&a);

    		for(j=1;j<=a/2;j++){
    			if(j==1)
    			printf("%d %d",a/2+j,j);
    			else
    				printf(" %d %d",a/2+j,j);
    		}
    		if(a%2==1)
    		printf(" %d",a);
    		printf("\n");
    	}
    }
