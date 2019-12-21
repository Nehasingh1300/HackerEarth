#include <stdio.h>
 
int main(void) {
 
	// Define the two integer variables
	int L,R;
 
	// Get L and R from the user
	scanf("%d", &L);
	scanf("%d", &R);
	int i=L;
	// Write here the logic to print all integers between L and R
   
    for(int i=L; i<=R; i++)
        printf("%d ",i);
	return 0;
}
