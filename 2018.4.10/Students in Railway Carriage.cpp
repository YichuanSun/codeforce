#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,a,b;
char str[200005];

int main()
{
	scanf("%d%d%d",&n,&a,&b);
	scanf("%s",str);
	for(int i=0;i<n;i++){
		if(str[i] == '.'){
			if((a > b && str[i-1] != 'A' || str[i-1] == 'B' )&& a > 0){
				str[i] = 'A';
				a--;
			}
			else{
				if((b >= a && str[i-1] != 'B' || str[i-1] == 'A' )&& b > 0){
					str[i] = 'B';
					b--;
				}
			}
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		if(str[i] == 'A' || str[i] == 'B')sum++;
	}
	cout<<sum<<endl;
	return 0;
}
