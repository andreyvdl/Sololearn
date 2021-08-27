#include <stdio.h>
#include <string.h>

typedef struct {
	char make[20];
	int model_year;
	int id_type; /* 0 for id_num, 1 for VIN */
	union {
		int id_num;
		char VIN[20];
	} id;
} vehicle;

int main() {
	vehicle car1;
	strcpy(car1.make, "Ford");
	car1.model_year = 2017;
	car1.id_type = 0;
	car1.id.id_num = 123098;
	strcpy(car1.id.VIN, "5YJSA1DG9DFP14705");


	printf("Make: %s\nYear: %d\nId type: %d\n", car1.make, car1.model_year, car1.id_type);
	if (car1.id_type != 0)
		printf("VIN: %s", car1.id.VIN);
	else
		printf("Id number: %d", car1.id.id_num);
	return 0;
}

/*
 * Surprising Union can be used inside a typedef.
 * As showed in the e.g. only one info will be utilized by the union, so better put some ifs.
*/