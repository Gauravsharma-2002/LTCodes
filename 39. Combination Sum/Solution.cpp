class Solution {
    void solve(int indx, vector<vector<int>>& op, vector<int>&temp,int trgt,vector<int>& arr){
    // when all vla are looked after and target has become 0
    // not considering the fact that next index is valid or not 
    // if(indx ==  arr.size() && trgt == 0){
    //     op.push_back(temp);
    //     return;
    // }
    // if i am at the last index then only check for the target value else  just return backwards from there
    if(indx == arr.size()){
        if(trgt ==0  ){
            op.push_back(temp);
        }
        return;
    }
    // // if my current value is greater than the traget then i can not include it in my solution so move to next inxd
    // if(arr[indx]>trgt){
    //     solve(indx+1,op,temp,trgt,arr);
    // }
    // // means i
    // else{
    //     temp.push_back(arr[indx]);
    //     solve(indx,op,temp,trgt-arr[indx],arr);
    //     // now when the recurssion returns to the function then we need to pop back the last element
    //     temp.pop_back();
    // }
    if(arr[indx]<= trgt){
        temp.push_back(arr[indx]);
        solve(indx,op,temp,trgt-arr[indx],arr);
        temp.pop_back();
    }
    // else{ // is else ne garbar karai hai dekho ise thik se 
        solve(indx+1,op,temp,trgt,arr);
    // }
    // return ;

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> op;
        vector<int> temp;
        solve(0,op,temp,target,candidates);
        return op;
    }
};