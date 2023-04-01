/*
(0, low-1)         -> only zeros
(low, (mid - 1))   -> only ones
(mid, high)        -> 0/1/2 in unsorted
((high+1), (n-1))  -> only twos
*/

void dutchNationalFlag(vector<int> &arr) {
	int n = arr.size();

	int low = 0;
	int mid = 0;
	int high = n-1;

	while(mid <= high) {
		if(arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid] == 1) {
			mid++;
		}
		else if(arr[mid] == 2){
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}
