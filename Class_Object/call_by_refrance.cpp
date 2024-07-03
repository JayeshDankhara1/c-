#include <iostream>
using namespace std;

class A {
public:
    void sort(int num[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (num[i] > num[j]) {
                    int temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
    }

    void dis(int num[], int n) { // Corrected function parameter for array
        cout << "Display:";
        for (int i = 0; i < n; i++) {
            cout << " " << num[i];
        }
        cout << endl;
    }
    void remove(int num[],int size_arry)
    {
        for(int i=0;i<size_arry-1;i++)
        {
            for(int j=i+1; j<size_arry;j++)
            {
                if(num[i]==num[j])
                {
                    num[j]=0;
                }
            }
            
        }
    }
    void delet(int num[],int size_arry,int value)
    {
        for(int i=0;i<size_arry;i++)
        {
            if(value==num[i])
            {
                num[i]=0;
            }
        }
            
    }
    int* revas(int num[],int size_arry)
    { //int *num1[size_arry];
            int* num1 = new int[10];

        int k=0;
        for(int i=size_arry-1; i>=0;i--)
        {
            num1[k]=num[i];
            k++;
        }
        // for(int i=0; i<size_arry;i++)
        // {
        //     num[i]=num1[i];
        // }
        return num1;
    }
    void revas1(int num[],int size_arry)
    {   int mid=size_arry/2; 
        for(int i=0 ; i<mid ;i++)
        {   int temp = num[i];
            num[i] = num[size_arry-1];
            num[size_arry-1] = temp;
        }
    }
    void dsord(int num[],int n)
    {
        for (int i = 0; i < n-1; i++) {
            for (int j = i +1; j < n; j++) {
                if (num[i] < num[j]) {
                    int temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
    }


};                            
    void Find_big(int x, int y, int *s , int *b)
    {
        if(x<y)
        {
            *s=x;
            *b=y;
        }
        else
        {
            *s=y;
            *b=x;
        }
    }

    

int main() {
    //A a;
    int a=11,b=45;
    int big,sm;
    Find_big(a,b,&sm,&big);
    cout<<"Bigg is "<<big<<endl;
    cout<<"Smoall is"<<sm<<endl;
    // int x[10] = {10,1,9,2,8,7,2,5,4,2};
    // a.dis(x, 10); // Display original array
    //a.sort(x, 10); // Sort array
    //a.remove(x,10);
   // a.revas(x,10);
    //cout<<endl;
    // int *y=a.revas(x,10);
    // for (int i = 0; i < 10; i++) {
    //         cout << " " << y[i];
    //     }
    //     cout << endl;
    
   // y=a.revas(x,10);
  //  a.revas1(x,10);
    // cout<<"sorted arry";
   // a.dis(y, 10); // Display sorted array
    return 0;

    
	return 0;
}
