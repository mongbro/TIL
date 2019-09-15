#include<stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main() {
	struct book b = { 1, "바람과 함께 사라지다", "마가렛 미첼" };

	printf("{ %d, %s, %s }", b.id, b.title, b.author);

	return 0;
}