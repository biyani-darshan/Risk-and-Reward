include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,n;
  cin>>n;
  int risk[n],bonus[n],trader[n],maxbonus = 0,j,ans;

  for(i = 0; i<n; i++)
  {
    cin>>trader[i];
  }
    for(i = 0; i<n; i++)
  {
    cin>>risk[i];
  }
  for(i = 0; i<n; i++)
  {
    cin>>bonus[i];
  }
  for(i = 0; i<n; i++)
  {
    maxbonus = 0;
    for(j = 0;j<n;j++){
      if(risk[j]<=trader[i])
      {
        maxbonus += bonus[i];
      }
  }
  if(ans<maxbonus)
  {
    ans = maxbonus;
  }
}
cout<<ans<<endl;
}