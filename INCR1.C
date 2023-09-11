

	void main( )
	{
	int a[ ] = { 2 , 7 , 9 , 93 , 17 , 2 ,7 , 2 ,  17 , 23 };
	int i , temp;

	clrscr();

	temp = a[0];

	for(i=0; i<=9; i++)
	{
	 a[i] = a[i] + temp;
	}

	printf("After increment , Array as follows \n");
	for(i=0; i<=9; i++)
	printf("%d\t", a[i] );

	getch();
	}