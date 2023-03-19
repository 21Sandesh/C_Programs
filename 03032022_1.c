#include <stdio.h>
#include<conio.h>
void main()
{	FILE *fp1;
	char c;
	fp1= fopen("INPUT.txt", "w"); 	/* open file for writing */
	printf("Enter: \n");
	while((c=getchar()) !=' ') 	/*get char from keyboard until CTL-Z*/
		putc(c,fp1); 				/*write a character to INPUT */

	fclose(fp1); 	 				/* close INPUT */
	printf("Press any key to Show Output \n");
	getch();
	fp1=fopen("INPUT.txt", "r"); 		/* reopen file */

	while((c=getc(fp1))!=EOF) 	/*read character from file INPUT*/
		printf("%c", c);			/* print character to screen */

	fclose(fp1);
}
