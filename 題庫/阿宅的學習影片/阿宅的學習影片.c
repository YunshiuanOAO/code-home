#include <stdio.h>
#include <stdlib.h>
 
int main() {	
	int L,S,tmp,i;
	scanf("%d%d",&L,&S);

	while(S!=L){
		if(S>L){
			S=S-2;
			
			i=i+1;
		}
		else if(S<L){
			S=S+5;
			i=i+1;
		}
	}
	printf("%d",i);
	return 0;
}
