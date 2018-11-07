#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
	
	*lat = *lat - 1;
	*lon = *lon + 1;
}

void fortune_coockie(char msg[])
{
	printf("Message say: %s\n", msg);
	
	printf("Vzuh! %i", sizeof(int) );
	 
	//printf("RAZMER message: %i bytes\n", sizeof(msg));
}

int main()
{
	//int latitude = 32;
	//int longitude = -64;
	//go_south_east(&latitude, &longitude);
	//printf("Stop! This coordinates is: [%i, %i]\n", latitude, longitude);
	//char quote[] = "Snes";
	//fortune_coockie(quote);
	
	char name[40];
	printf("Vvedite vasche imja = ");
	//scanf("%39s", name);
	fgets(name, sizeof(name), stdin);
	
	return 0;
}

