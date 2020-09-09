#include <stdio.h>
typedef struct {
	char name[11];
	int age;
}Person;
int main() {
	Person ps[3];
	for (int i = 0; i < 3; ++i) {
		scanf("%s%d", ps[i].name, &ps[i].age);
	}
	for (int i = 0; i < 3; ++i) {
		printf("Name:%s, Age:%d\n", ps[i].name, ps[i].age);
	}
	return 0;
}
