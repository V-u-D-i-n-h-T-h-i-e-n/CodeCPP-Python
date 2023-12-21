#include <stdio.h>

int main() {
	int lua_chon;

	printf("MENU:\n"
		"1. Switch user\n"
		"2. Open ...\n"
		"3. Log off\n"
		"4. Exit\n"
		"Lua chon: ");
	scanf("%d", &lua_chon);

	switch(lua_chon) {
	case 1:
		printf("Ban da chon \"Switch user\"\n");
		break;
	case 2:
		printf("Ban da chon \"Open ...\"\n");
		break;
	case 3:
		printf("Ban da chon \"Log off\"\n");
		break;
	case 4:
		printf("Ban da chon \"Exit\"\n");
		break;
	default:
		printf("Lua chon khong co!\n");
	}

	return 0;
}