void sortStackArray() {
	const int n = 5;
	int l = 0, r = n - 1;
	int arr[5];
	readArray(arr, n);
	printf("n = %d \n", n);
	writeArray(arr, n);
	sort(arr, l, r);
	printf("Sort: \n");
	writeArray(arr, n);
}