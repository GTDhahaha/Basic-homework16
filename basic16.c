#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() { 
	unsigned int i,n,n1,n2=0; 
	char string_1[20][15]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"}; 
	char string_2[8][15]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"}; 
	char string_3[3][15]={""," Thousand"," Million"}; 
	char rs[200]=""; 
	char t[200]; 
	
	printf("Please enter a constant number to change the character:"); 
	scanf("%d",&n); 
	i=0; 
	while (n>0) {
		strcpy(t,""); 
		if ((i % 3)==0) {
			n1=n % 100; 
			if (n1<20) strcat(t,string_1[n1]); 
			else {
				strcat(t,string_2[n1/10-2]); 
				if (n1%10) strcat(t,"-"); 
				strcat(t,string_1[n1%10]); 
			} 
			if (n1) {
				strcat(t,string_3[i/3]); 
				if (n2) strcat(t,", "); 
				strcat(t,rs); 
				strcpy(rs,t); 
			} 
			n2=n1; n=n /100; i+=2; 
		} 
		else {
			n1=n%10; 
			if (n1) { 
			strcpy(t,string_1[n1]); strcat(t," Hundred"); 
			if (n2) strcat(t," and "); 
			strcat(t,rs); strcpy(rs,t);} 
			n2=n2+n1; 
			n=n/10; i++; 
		} 
	} 
	
	printf("%s.\n", rs); 
	system("pause"); 
	return 0; 
}
