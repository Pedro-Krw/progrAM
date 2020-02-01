#include <stdio.h>

int main (){
	int a,count=0;
	scanf("%d",&a);
	a = a + 2;
	while (a>=2){
		if(a%2==0) count=1;
		else if(a%2==1 && a>1){
			count=0;
			break;
		}
		a=a/2;
	}
	if (count==0)
		printf("%d\n", a);
	else
		printf("SOEKKA\n");
		
return 0;
}
