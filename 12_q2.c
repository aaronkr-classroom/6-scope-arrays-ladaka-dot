#include <stdio.h>


int main() {
    int n;
    printf("갯수");
    scanf_s("%d", &n);
    int data [100];  // 예시 배열

    printf("수열의 원소 입력: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &data[i]);
    }

    int sum = 0;
    for (int j = 0; j < 500; j += 2) {  // 짝수 인덱스만 접근
        sum += data[j];
    }
    
    printf("%d", sum);
    return 0;
}
