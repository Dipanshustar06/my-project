//#include<stdio.h>
//int main() {
// int n;
// printf("enter the value of n:");
// scanf("%d", &n);
// int arr[n], freq[n];
// for(int i = 0; i < n; i++) {
// scanf("%d", &arr[i]);
// freq[i] = -1;
// }
// for(int i = 0; i < n; i++) {
// if(freq[i] == -1) {
// int count = 1;
// for(int j = i + 1; j < n; j++) {
// if(arr[i] == arr[j]) {
// count++;
// freq[j] = 0;
// }
// }
// freq[i] = count;
// }
// }
// for(int i = 0; i < n; i++) {
// if(freq[i] != 0) printf("%d occurs %d times\n", arr[i], freq[i]);
// }
// return 0;
//}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],p;
	printf("insert the elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value of p:");
	scanf("%d",&p);
	for(int i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}











