#include <stdio.h>

int main()
{
	struct {
		char model[20];
		float khoi_luong;
		char mau_son[10];

		struct {
			char chung_loai[20];
			float ban_kinh;
			float khoi_luong;
		} banh[4];
	} oto;

	int i;

	printf("Nhap du lieu:\n");

	printf("Model: ");
	fflush(stdin);
	gets(oto.model);

	printf("Khoi luong: ");
	scanf("%f", &oto.khoi_luong);

	printf("Mau son: ");
	fflush(stdin);
	gets(oto.mau_son);

	printf("Nhap du lieu cho cac banh:\n");
	for (i=0; i<4; i++) {
		printf("Banh thu %d:\n", i+1);

		printf("Chung loai: ");
		fflush(stdin);
		gets(oto.banh[i].chung_loai);

		printf("Ban kinh: ");
		scanf("%f", &oto.banh[i].ban_kinh);

		printf("Khoi luong: ");
		scanf("%f", &oto.banh[i].khoi_luong);
	}

	printf("\n\nThong tin ve oto:\n"
		" Model: %s\n"
		" Khoi luong: %.3f\n"
		" Mau son: %s\n", oto.model, oto.khoi_luong, oto.mau_son);
	for (i=0; i<4; i++) {
		printf(" Banh thu %d:\n"
			"  Chung loai: %s\n"
			"  Ban kinh: %.3f\n"
			"  Khoi luong: %.3f\n",
			i+1,
			oto.banh[i].chung_loai,
			oto.banh[i].ban_kinh,
			oto.banh[i].khoi_luong);
	}

	return 0;
}