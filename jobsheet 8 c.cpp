#include <stdio.h>

main (){
	int nim [1], i;
	for (i = 0; i <= 1; i++){
		printf ("Masukkan nim ke-%i ", i+1);
		scanf ("%i", &nim[i]);
	}
	for (i = 0; i <= 1; i++){
		printf ("nim ke-%i %i\n", i+1, nim[i]);
	}
}




