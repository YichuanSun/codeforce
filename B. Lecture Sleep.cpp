#include <iostream>
#include <algorithm>
#define N 100050
using namespace std;
int a[N],b[N];
long long sum1[N],sum2[N];
int main()	{
	int n,k;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)	scanf("%d",&a[i]);
	for (int i=1;i<=n;i++)	scanf("%d",&b[i]);
	for (int i=1;i<=n;i++)	{
		sum1[i]=sum1[i-1]+a[i]*b[i];
		sum2[i]=sum2[i-1]+a[i];
	}
	long long temp,Max=0;
	for (int i=0;i<=n-k;i++)	{
		temp=sum1[i]+sum2[i+k]-sum2[i]+sum1[n]-sum1[i+k];
		Max=max(temp,Max);
	}
	cout << Max <<endl;
	return 0;
}

//���˺þ������������ˡ������дline17Ϊi=1,����ζ�ŵ�һ������
//û�б������ѡ����״̬Ӱ�쵽�����磬n=10��k=2�������
//��һ�����ݶ�Ӧ��˯��ֵΪ0�� �����Ͳ��ᱻ����ö����ӵ� 
//��ʹ��ˡ� 
