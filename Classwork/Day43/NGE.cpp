// Online C++ compiler to run C++ program online
#include <iostream>
#include<array>
#include<iterator>
#include<map>

int main() {
    std::array<int,6> arr={4, 5, 2, 25, 7, 8};
    std::map<int, int> lookup;
    for(int i=0; i<arr.size(); ++i)
        lookup.insert({arr[i], i});
    
    std::map<int, int>::iterator itr;
    bool flag;
    int temp;
    for(int i=0; i<arr.size(); ++i)
    {
        itr=lookup.upper_bound(arr[i]);
        flag=true;
        temp=arr.size();
        while(itr!=lookup.end())
        {
            if(itr->second<temp && itr->second>i)
            {
                temp=itr->second;
                flag=false;
            }
            itr++;
        }
        if(flag==true)
            std::cout<<arr[i]<<" --> -1"<<std::endl;
        else
        std::cout<<arr[i]<<" --> "<<arr[temp]<<std::endl;    
    }
    

    return 0;
}
