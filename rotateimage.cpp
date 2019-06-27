#include<iostream>
using namespace std;

void rotateA(int a[][100],int n){
	//Reverse every row!
	for(int i=0;i<n;i++){
		int j = 0,k=n-1;
		while(j<k){
			swap(a[i][j],a[i][k]);
			j++; k--;
		}
	}
	//transpose
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				swap(a[i][j],a[j][i]);
			}
		}
	}


}

int main(){

	int a[1005][1005];

	//Rotate by 90 deg
	int n;
	cin>>n;

	//Input
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	rotateA(a,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
