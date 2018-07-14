#include <stdio.h>

int
main ()
{
	int nc = 0, nb = 0, nt = 0, nl = 0;
	int c = 0;

	while ((c = getchar ()) != EOF){
		if (c = '\n')
			nl++;
		else if (c = '\t')
			nt++;
		else if (c = ' ')
			nb++;
		else 
			nc++;
	}
	printf("The number of charactes : %d\n", nc);
	printf("The number of blanks : %d\n", nb);
	printf("The number of tabs : %d\n", nt);
	printf("The number of new lines : %d\n", nl);

	return 0;
}
