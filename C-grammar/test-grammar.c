#include<stdio.h>
int a = 5;
//a = a + 2; //not going to work! since translation_unit -> declarations only outside, no assignment_expressions at all !!
int main(){
	int x , y, z; 
	x = 2, y  = 3, z  = 4;
	printf("Value ofz = %d",z);
	return 0;
}
