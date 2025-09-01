//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int greedy_Activiy_selection(vector<int> &start, vector<int>&end)
{
  int ans=0;
  int finish=-1;

  for (int i = 0; i < start.size(); i++)
  {
    if(start[i]>finish){
        finish=end[i];
        ans++;
    }
  }
  return ans;
}
int main()
{
vector<int>start={1,2,0,4,99,6,8};
vector<int> end={2,4,7,5,3,6,7};
cout<<"Activity Selection: "<<greedy_Activiy_selection(start,end);

return 0;

}