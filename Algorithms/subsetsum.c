#include <stdio.h>

int main(void){
	
	int a[] = {10, 6, 5, 2};
	int X = 7;
	
	int a_size = sizeof(a)/sizeof(int);
 
 /* i(row) denotes required sum needed to find and j(column) denotes element
  * 0th column means no element(null)*/ 
	int ss[X + 1][a_size + 1]; 
	
	for(int i = 0; i<=X; i++){
		
		for(int j = 0; j<=a_size; j++){
			
			if(i == 0)
				ss[i][j] = 1;
				
			else if(j == 0)    //0 element is there in the subset
				ss[i][j] = 0;
			
	/*elements are stored as 0th, 1st, 2nd index so on. So a[j-1] not a[j]
	 * In table, row 1st means 0th element of array, a[0]
	 * row 2nd -- a[1]
	 * row 3rd -- a[2]*/
	 
			else if(a[j-1] > i) 
				ss[i][j] = ss[i][j-1];	
			
			else{
					int k = i-a[j-1];
					ss[i][j] = (ss[i][j-1] || ss[k][j-1]);
				}
			}	
		
		}
		
	if(ss[X][a_size])
		printf("\nPossible subset exists");
	else	
		printf("\nPossible subset does not exist");
    
	return 0;
	}
