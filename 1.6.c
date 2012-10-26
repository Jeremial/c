//验证表达式 getchar() != EOF 的值是 0 还是 1
#include <stdio.h>
int main(){
	printf("please enter a char :)\n");
	if(1 == (getchar() != EOF)) 
		printf("getchar()!=EOF result is 1\n");
	else if(0 == (getchar() != EOF))
			printf("getchar()!=EOF result is 0\n");
	else 
			printf("the result is either 1 nor 0\n"); 
	return 0;
}
//result is 1
