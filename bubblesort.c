int main(){
/*sets counters for the algorithm*/  
  int i, j; 
	int n=12;
	int k =0;
	int q=0;

	char arr[12]="EASYQUESTION";
   /*outer loop for alternating bubblesort account for rounding of n/2 adjust to (n+2)/2 to get proper number of sorts */
   for (i = 0; i < (n+2)/2; i++){       
    /*have to account for how i increments for each new left or right pass*/ 
      
	  /*left sort of bubblesort*/
       if(k==0){
		for (j = i/2; j < n-i/2-1; j++){  
		   if (arr[j] > arr[j+1]) {
              char temp = arr[j]; 
			  arr[j] = arr[j+1]; 
			  arr[j+1] = temp; 
				
		   k=1;
		   }
		}
	
		
	   }
		/*right sort of bubblesort */   
		   else{
			  for(q=n-(i+1)/2-1;q>i-1;q--){
			  if (arr[q]<arr[q-1]){ 
              char temp = arr[q]; 
			  arr[q] = arr[q-1]; 
			  arr[q-1] = temp; 
				
				k=0;
			  }
			
			}
		  
		   }

		/* print array after each pass of the sort */
		printf(arr);
		printf("\n");
	   }

	printf("Sorted array is \n");
		printf(arr);
  }