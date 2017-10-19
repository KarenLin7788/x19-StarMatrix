//Author: Xinru Lin
#include<vector>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rows;
int cols;


int main()
{
   srand(time(NULL) );


std::vector<vector<int> > first;


cout<<"Enter rows and columns of stars:"<<endl;
cin>>rows;
cin>>cols;

first.resize(rows);
for (int row=0;row<first.size();row++)
  {
     first[row].resize(cols);
    for (int col=0;col<first[row].size();col++)
    
      {
       first[row][col]=0; 
             
       cout<<"*";
       
      }
       cout<<endl;  
  }






return 0;
}
