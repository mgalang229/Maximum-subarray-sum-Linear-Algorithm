#include <bits/stdc++.h>
using namespace std;

int main(){
	int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int best = 0, sum = 0;
	int n = sizeof(array)/sizeof(array[0]);
	for(int k = 0; k < n; k++){
		sum = max(array[k],sum+array[k]);
		best = max(best,sum);
	}
	cout << best << "\n";
	return 0;
}
