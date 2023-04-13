#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    
    
    int x[]={66,1,94,9,44,52,80,78,100,5,9,91,70,90,75,42,2,67,11,
                35,14,87,75,81,41,86,56,50,21,75,44,18,48,25,36,96,
                18,53,80,4,23,36,20,8
            }; // int x0, x1, x2, ....
    int b;        
    cout<<"Mem add a:"<<&a<<endl;
    cout<<"Mem add b:"<<&b<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<x[1]<<endl;   //x+1
    // & adl opr reference, * opr dereference
    size_t size = sizeof(x)/sizeof(int);
    for (int i=0;i<size;i++)
        cout<<x+i<<" "<<*(x+i)<<endl;
    
    char name[]={"Ilkom Unila"};      //null char ('\0') after 'a'
    cout<<sizeof(name)<<endl;
    
    char vocal[]={'a','i','u','e','o','\0'};
    cout<<sizeof(vocal)<<endl;
    
    for (int i=0;i<sizeof(vocal);i++)
        cout<<vocal[i]<<endl;
    
    cout<<x<<" "<<&x[1]<<endl;
    cout<<name<<endl;
    cout<<vocal<<endl;
    
    //pencarian array x
    int num;
    cin>>num;
    bool found=false;
    for (int i=0;i<size;i++)
        if (num==x[i]){
            found=true;
            break;
        }
    
    cout<<(found?"Ada":"Tidak Ada");
    /*
    Binary Search:
     {20,30,40, 50,60 ,70, 80,95, 102, 166, 175,200 };
      num = 40
      l = 0
      h = 11
      mid = (l+h)/2 = 5
      {20,30,40, 50,60 ,70}
      l=0
      h=mid=5
      mid=(l+h)/2 = 2
      ketemu num = x[2] -> 40
      
      num = 175;
      {80,95, 102, 166, 175,200 };
      l = mid+1 = 6
      h = 11
      mid = 8
      
      Brute Force -> best case adalahketika yang dicari adalah data pertama -> kompleksitasnya adalah O(1)
      Brute Force -> worst case adalahketika yang dicari adalah data terakri -> kompleksitasnya adalah O(n)
      
      Binary Force -> best case adalahketika yang dicari adalah data di tengah (mid) -> kompleksitasnya adalah O(1)
      Binary Force -> worst case adalahketika yang dicari adalah tidak  di tengah (mid) -> kompleksitasnya adalah O(log(n))
      
      
      
      
    */
    
    return 0;
}
