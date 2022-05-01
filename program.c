#include "stdio.h"
#include "stdlib.h"

/*const char* Olustur() {
	char *str = "Sakarya";
	return str;
}*/
	const char* Olustur2() {
	char str[] = "Sakarya";
	return str[];
	}
	/*const char* Olustur3() {
	char str[] = malloc();
	return str;
	}*/

int main(){
	/*int x[5];
	x[0] = 100;
	int *m;
	m = x;
	printf("%d",*m);*/
	
	//char *str = "Sakarya";
  // printf("%c",*str);
   //printf("%s",str);
   
   /*const char *ism = Olustur();
   printf("%s",ism);*/
    const char *ism2 = Olustur2();
   printf("%s",ism2);
   /*char *ism3 = Olustur3();
   printf("%s",ism3);*/
	
	return 0;
}