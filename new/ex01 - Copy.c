#include <stdio.h>
#include <string.h>
int main(){
	char str1[10], str2[10];
	strcpy(str1, "Linguagem");
	strcpy(str2, "Cqwertyuioasd");
	strcat(str1,str2);
	printf("\n str eh: %s quantidade de caracteres %d",str1,strlen(str1));
}


