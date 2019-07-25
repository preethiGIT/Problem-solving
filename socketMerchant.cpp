/*John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
 
 For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .
 Function Description
 It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

n: the number of socks in the pile
ar: the colors of each sock*/



#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;

int main()
{
  int hash[101];
  for(int j=0;j<101;j++)
  {
    hash[j]=0;
  }
  int final_val=0;
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
    hash[arr[i]]++;
  }
  for (int j = 0; j < 101; j++)
  {
    final_val+=round(hash[j]/2);
  }
  cout<<final_val;
}


