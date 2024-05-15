#include <bits/stdc++.h>
using namespace std;
int main(){
  char in[110][110];
    int a,b;scanf("%d%d",&a,&b);
	for(int i=0;i<a;i++){
		scanf("%s",in[i]);
	}
	int ret=0;
	for(int i=0;i<a;i++)for(int j=0;j<b;j++){
		if(i+1<a&&in[i][j]==in[i+1][j]&&in[i][j]=='.')ret++;
		if(j+1<b&&in[i][j]==in[i][j+1]&&in[i][j]=='.')ret++;
	}
	printf("%d\n",ret);
}
