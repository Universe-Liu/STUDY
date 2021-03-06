#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
vector<vector<int>> threeSum(vector<int>&nums){
    vector<vector<int>> res;
    if (nums.size() <= 2)
        return res;
    sort(nums.begin(),nums.end());
    if(nums[0]>0){
        return res;
    }
    int *Sum_2,f,temp;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(nums[i]==nums[j]){
                continue;
            }
            temp=0-nums[i]-nums[j];
            vector<int>::iterator it=find(nums.begin(),nums.end(),temp);
            if(it!=nums.end()){
                f=&(*it)-&nums[0];
                if(f!=i&&f!=j){
                    res.push_back({nums[i],nums[j],nums[f]});
                    cout<<i<<" "<<j<<" "<<f<<" "<<endl;
                }
            }
        }
    }
    cout<<"**************************"<<endl;
    return res;
}
*/
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    int vecSize = int(nums.size());
    if (vecSize <= 2)
        return result;
    int possibleSize = vecSize - 2;
    sort(nums.begin(), nums.end());
    for (int index = 0; index < possibleSize; index++){
        int intNow = nums[index];
        if(intNow > 0)
            break;
        int negativeNow = 0 - intNow;
        int lo = index + 1;
        int hi = vecSize - 1;
        while (lo < hi){
            int intLo = nums[lo];
            int intHi = nums[hi];
            if (intLo + intHi == negativeNow){
                vector<int> tmpVec{intNow, intLo, intHi};
                result.push_back(tmpVec);
                //去重
                while (lo < hi && nums[lo] == intLo)
                    lo++;
                while (lo < hi && nums[hi] == intHi)
                    hi--;
            }
            else if (intLo + intHi < negativeNow)
                lo++;
            else if (intLo + intHi > negativeNow)
                hi--;
        }
        //去重
        while (index + 1 < possibleSize && nums[index] == nums[index + 1])
            index++;
    }
    return result;
}

int main(){
    vector<int>nums={-1, 0, 1, 2, -1, -4, 2};
    vector<vector<int>> s=threeSum(nums);
    vector<vector<int>>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        for(int i=0;i<(*it).size();i++){
            cout<<(*it)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
