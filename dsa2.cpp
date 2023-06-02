#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int result;
     

    
    int size;
    cout<<"entre the size of the vector "<<endl;
        cin>>size;
        string q[size];
        string l[size] = {"ab","ab","bc","csj","ajs"};
        for(int i = 0; i < size; i++)
        {
            cin>>q[i];           
        }
        
        for(int i = 0;i<size;i++)
        {
            int count = 0;
            for(int j = 0;j<size;j++)
        {
            if(q[i]==l[j])
            {
                count++;
            }
            
        }
        
        
        cout<<count;
        
      }
    
    }
    
