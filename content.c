void sorted(int array[],int nums){
	int temp;
	for(int i=0;i<nums-1;i+=1){
		for(int j=i+1;j<nums;j+=1){
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
