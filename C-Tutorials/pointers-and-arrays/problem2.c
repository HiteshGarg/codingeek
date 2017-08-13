int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {0, 0, 0}};
	int (*p)[3] = arr;
	
	printf("%d  %d  %d\n", (*p)[0], *(p[1]+1), (*p)[2]);
	
	++p;
	
	printf("%d  %d  %d\n", (*p)[-1], (*p)[1], (*p)[2]);  
	/* (*p)[-1] write it as *(*(p + 0)-1) */	
	
	return 0;
}