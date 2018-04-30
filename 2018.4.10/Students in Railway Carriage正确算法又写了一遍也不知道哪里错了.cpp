#include <iostream>
#include <algorithm>
using namespace std;

int main()	{
	int n,a,b,num=0;
	string str;
	scanf("%d %d %d",&n,&a,&b);
	cin >> str;
	if (str[0]=='.')	{
		if (a>b&&a>0)	{a--;num++;str[0]=='A';}
		else if (a<=b&&b>0){b--;num++;str[0]=='B';}
		else {
			printf("0\n");
			return 0;
		}
	}
	for (int i=1;i<n;i++)	{
		if (str[i]=='.')	{
			if (str[i-1]=='*')	{
				if (a>b&&a>0)	{
					a--;
					num++;
					str[i]='A';
				}
				else if (b>=a&&b>0)	{
					b--;
					num++;
					str[i]='B';
				}
			}
			else if (str[i-1]=='A')	{
				if (b>0)	{
					b--;
					num++;
					str[i]='B';
				}	
			}
			else if (str[i-1]=='B')	{
				if (a>0)	{
					a--;
					num++;
					str[i]='A';
				}
			}
		}
		//printf("i=%d now=%c a=%d b=%d\n",i,str[i],a,b);
	}
	printf("%d\n",num);
	return 0;
}
//下面这个方法与我的思路很像，看看学学 
/*
#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    string s;
    cin>>n>>a>>b;
    cin>>s;
    int sum=0;
    if(s[0]=='.'){
        if(a>=b){
            s[0]='a';
            a--;
        }
        else {
            s[0]='b';
            b--;
        }
        sum++;
    }
    for(int i=1;i<n;i++){
        if(a==0&&b==0) break;
        if(s[i]=='.'){
            if(s[i-1]=='*'||s[i-1]=='.'){
                if(a>=b){
                    s[i]='a';
                    a--;
                }
                else {
                    s[i]='b';
                    b--;
                }
                sum++;
            }
            else {
                if(s[i-1]=='a'){
                    if(b>0){
                        s[i]='b';
                        b--;
                        sum++;
                    }
                }
                else {
                    if(a>0){
                        s[i]='a';
                        a--;
                        sum++;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
return 0;
}
*/
