#include <stdio.h>

int
main ()
{
	int c=0, nl=0;

	/*number of new lines*/
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
	}
	printf("The number of new lines is : %d\n", nl);
	
	/*number of tabs*/
	nl = 0;
	while ((c = getchar()) != EOF)
        {
                if (c == '\t')
                {
                        ++nl;
                }
        }
        printf("The number of tabs : %d\n", nl);

	/*number of blank spaces*/
	nl=0;
	while ((c = getchar()) != EOF)
        {
                if (c == '\n')
                {
                        ++nl;
                }
        }
        printf("The number of new lines is : %d\n", nl);

	return 0;
}
