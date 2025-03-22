#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> num, int l, int r, int key){
    while(l<=r){
        int mid =l+(r-l)/2;
        if(key==num[mid]){
            return mid;
        }
        if(key>num[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
        
    }
    return -1;
}
    
int main() {
    
    vector<int> num;
    num.push_back(2);
    num.push_back(3);
    num.push_back(5);
    num.push_back(6);
    num.push_back(7);
    num.push_back(7);
    num.push_back(11);

    int index=binarySearch(num, 0, num.size()-1, 7);
    cout<<index-1<<endl;
    
    return 0;
}