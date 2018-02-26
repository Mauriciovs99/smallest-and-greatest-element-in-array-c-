//This program saves a list of elements in an array and shows the smallest and the greatest element in it.
#include <stdio.h>

main (){
	int numbers[100]; //that same
	int limit=0; //Keeps the size of the array
	int posMayor=0; //Keeps the greatest number
	int posMenor=0; //Keeps the smallest number
	
	//Ask how many elements you are going to save
	do{
		printf ("How many numbres are you going to save?\n");
		scanf ("%d", &limit);
	} while (limit<1||limit>100); //Ensures that I save from 1 to 100 elements
	
	//Saves the information
	for (int i =0; i<limit;i++){
		printf ("Tell me the integer %d\n", i);
		scanf ("%d", &numbers[i]);
		
	//starts comparing when there are two elements on the list until the end
		if (i>=1){
			if (numbers[i]>numbers[posMayor]){
				posMayor = i;
			}
			if (numbers[i]<numbers[posMenor]){
				posMenor= i;
			}
			} 
		}
		
	//prints the greatest and smallest element
	printf ("The greatest is in the pos. %d and its %d\n", posMayor, numbers[posMayor]);
	printf ("The smallest it in the pos. %d and its %d\n", posMenor, numbers[posMenor]);
}
