#include <stdio.h>

int string_length(char data[]){
	int count = 0;
	while (data[count]) count++;
	return count;
}

int main(void) {

	int data_length,str_length;
	char data[10] = { 'h','a','p','p','y',0};
	data_length = string_length(data);
	str_length = strlen(data);

	printf("data_length=%d\n", data_length);
	printf("str length=%d\n", str_length);

	char data2[10] = { 'a','b','c',0 };
	char result[16];

	printf("result(0):%s", result);
	strcpy(result, data2);

	printf("result(cpy):%s", result);

	strcat(result, "def");
	printf("result(cat):%s", result);

	return 0;
}