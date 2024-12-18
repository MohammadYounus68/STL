#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
void  reverse() {
	const int mx = 1002344;
	int a[mx];
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1, j = n; i < j; i++, j--) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for(int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}
void countDisit() {
	const int mx = 1000123;
	int count[mx];
	int a[mx];
	int n; scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
	}
	for(int i = 1; i <= n; i++) {
		count[a[i]]++;
	}
	int t; scanf("%d",&t);
	while(t--) {
		int val; scanf("%d",&val);
		printf("%d",count[val]);
	}
}
int main() {

	countDisit();
}