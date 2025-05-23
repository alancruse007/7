#include <stdio.h>
int m(int a, int b) {
    return a<b?b:a;
}

int main() {
  int w[]={10,20,30},v[]={60,100,120},n=3,W=50;
  int dp[4][51]={0};
  for (int i=0;i<=n-1;i++)
    for (int j=1;j<=W;j++)
      dp[i+1][j]=(w[i]<=j)?m(v[i]+dp[i][j-w[i]],dp[i][j]):dp[i][j];
  printf("%d",dp[n][W]);

}