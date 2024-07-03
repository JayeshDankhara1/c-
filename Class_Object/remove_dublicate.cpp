#include<iostream>
#include<vector>
#include <algorithm>
#include"hello.h"
using namespace std;
class Solution {
public:
        dispay(vector<int>& nums)
        {
            for(int i=0;i<nums.size();i++)
            {
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            goto jump;
        }
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<1)
            {
                nums.erase(nums.begin());
                i--;
            }
            else if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        jump:
        int ans,count=0;
        
        for(int i=0; i<nums.size()-1;i++)
        {
            int k=nums[i];
            int l=nums[i+1];
            if(k+1==l)
            {
                continue;

            }
            else
            {
                count++;
                ans=nums[i]+1;
                break;
            }
        }
        dispay(nums);
        if(nums[0]==1)
        {
            if(count==0)
            {
                cout<<"Output:"<<nums[nums.size()-1]+1;
                return nums[nums.size()-1]+1;
            }
            else
            {
                return ans;
            }
        }

        return 1;
    }
    int removeDuplicates(vector<int>& nums) {
        for(int i=0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i]==nums[i+1])
            {
             //   nums.erase(i);
                nums.erase(nums.begin()+i);  
                i--;

            }
        }
    }
    int containsDuplicate(vector<int>& nums) {
        int x=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=i+1; j<nums.size() ; j++)
            {
                if(nums[i]==nums[j])
                {
                    x++;
                }             
            }
        }
        return x;
    }

    int removeElement(vector<int>& nums, int val) {
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
            }

        }
        
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int>mar;
        int n1=0,n2=0;
        for(int i=0;i<m+n;i++)
        {   if(n1<m && n2<n)
            if(nums1[n1]<nums2[n2])
            {
                mar.push_back(nums1[n1]);
                n1++;
                
            }
            else {
                mar.push_back(nums2[n2]);
                n2++;
            }else{
                if(n1<m)
                {
                    mar.push_back(nums1[n1]);
                    n1++;
                }
                else
                {
                    mar.push_back(nums2[n2]);
                    n2++;
                }
            }
        }
        for(int i=0;i<mar.size();i++)
        {
            if(i<m)
            nums1[i]=mar[i];
            else
            nums1.push_back(mar[i]);
        }
   }

    string convert(string s, int numRows) {
    
    if(numRows <= 1) return s;

    vector<string>v(numRows, ""); 

    int j = 0, dir = -1;

    for(int i = 0; i < s.length(); i++)
    {

        if(j == numRows - 1 || j == 0) dir *= (-1); 
		 
        v[j] += s[i];
        cout<<v[i]<<"  ";
        if(dir == 1) j++;

        else j--;
    }

    string res;

    for(auto &it : v) res += it; 

    return res;

    }


};
int main()
{
    vector<int> vet={1,2,2,1,3,1,0,4,0};
    vector<int> vet1;
    int s=3;
    string k="PAYPALISHIRING";
    string l;
    /*cout<<"Enter Size:-";
    cin>>s;
    for (int i = 0; i < s; i++)
    {int e;
        int v;
        cin>>e;
        vet.push_back(e);
        cin>>v;
        vet1.push_back(v);
    }*/
    Solution z;
    //z.dispay(vet);
    //z.removeDuplicates(vet);
    //z.removeElement(vet,10);
   // cout<<z.containsDuplicate(vet)<<endl;
    //cout<<x<<endl;
    //z.dispay(vet);
    //cout<<endl;
    //z.dispay(vet1);
    //z.merge(vet,5,vet1,5);
    //z.dispay(vet); 
   // z.firstMissingPositive(vet); 
        z.convert(k,s);
    return 0;

}