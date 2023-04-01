int findMajorityElement(vector<int> &arr) {
	int vote = 0;
	int number;
	int n = arr.size();

	for(int i = 0; i < n; i++) {
		if(vote == 0){
			vote = 1;
			number = arr[i];
		}
		else if(arr[i] == number) {
			vote++;
		}
		else if(vote > 0){
			vote--;
		}
	}
	return number;
}
