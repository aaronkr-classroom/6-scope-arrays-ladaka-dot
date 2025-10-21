#include <stdio.h>
#include <string.h>

/*
데이터 암호화 





*/





void encrypt(char* data, char key) {
	
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}

}

void decrypt(char* data, char key) {


}



int main(void) {
	char plaintext[] = "hanbat national university";
	char key = 'm';

	printf("original: %s\n", plaintext);
	encrypt(plaintext,key);

	printf("encrypted:%s\n", plaintext);
	decrypt(plaintext,key);

	printf("decrypted:%s\n", plaintext);
	return 0;
}