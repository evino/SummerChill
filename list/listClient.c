#include <stdio.h>
#include "list.h"

int main() {
	char *msg = "Inside client main!";

	printf("%s\n", msg);

	list_t *testList = list_new();
	int return_code = -999;

	return_code = list_append(testList, 55);
	return_code = list_append(testList, 58);

	printf("CODE: %d\n", return_code);

	printf("%lu\n", sizeof(testList));


	printf("Head is %d\n", get_head(testList));


	move_front(testList);
	move_next(testList);
	printf("%d\n", get_cursor(testList));
	return_code = list_append(testList, 14);
	printf("%d\n", get_cursor(testList));
	move_next(testList);
	printf("%d\n", get_cursor(testList));
	move_front(testList);
	printf("%d\n", get_cursor(testList));

	list_append(testList, 99);
	int tail_val = get_tail(testList);
	printf("Tail value is %d\n", tail_val);

		list_append(testList, 88);
	

	walk(testList);

	list_delete(&testList);

	return 0;
}

