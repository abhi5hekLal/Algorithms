void next_permutation(vector<int> &a) {
	int n = a.size();
	int breakPoint = -1;

	for(int i = n-2; i >= 0; i--) {
		if(a[i] < a[i+1]) {
			breakPoint = i;
			break;
		}
	}

	if(breakPoint == -1)
		reverse(a.begin(), a.end());

	for(int i = n-1; i >= 0; i--) {
		if(a[i] > a[breakPoint]) {
			swap(a[i], a[breakPoint]);
			break;
		}
	}

	reverse(a.begin()+breakPoint+1, a.end());
}
