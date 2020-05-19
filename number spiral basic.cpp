#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	long long int num;cin>>num;cout<<"\n";
	long long int m=sqrt(num),i,j,count=1,l=0,k=0,lc=0,lr=0,mat[m][m];
	while((lc!=(m-1)) && (lr!=(m-1))){
		lc++;
		lr++;
		while(l!=lc){
			mat[k][l]=count;
			l++;
			count++;
		}
		while(k!=lr){
			mat[k][l]=count;
			k++;
			count++;
		}
		
		while(l!=0){
			mat[k][l]=count;
			count++;
			l--;
		}
		lc++;
		lr++;
		while(k!=lr){
			mat[k][l]=count;
			count++;
			k++;
		}
		while(l!=lc){
			
			mat[k][l]=count;
			count++;
			l++;
		}
		while(k!=0){
			
			mat[k][l]=count;
			count++;
			k--;
		}
		
	}
	mat[k][l]=count;

	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
