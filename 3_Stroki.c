#include<string.h>
#include<stdio.h>

char tracks[][40] = 
	{"Ja ostavil svoje serdce",
	"Njuark, Njuark!",
	"Tanec s muzlanom",
	"Otsuda i do roddoma",
	"Devchonka s ostrova Ivodzima"
	};

void find_track(char search_for[])
{
	int i;
	for(i = 0; i<5; i++)
	{
		if (strstr(tracks[i], search_for))
		{
			printf("Pesnja nomer %i: '%s'\n ", i, tracks[i]);
		}
		
			
	}
	
}

int main()
{
	char search_for[80];
	printf("Iskat': ");
	fgets(search_for, 80, stdin);
	search_for[strlen(search_for)-1] = '\0';
	find_track(search_for);
	return 0;

}






