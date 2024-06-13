class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0, ten=0,twenty = 0;
        int size = bills.size();
        for(int i=0;i< size ;i++){
            if( bills[i] == 5) {
                five ++;
            }
            else if(bills[i]==10){
                if(five) {
                    ten++;
                    five--;
                }
                else { return false;}

            }
            else{
                if( five && ten){
                    five--;
                    ten--;
                }
                else if( five >= 3){
                    five = five -3 ;

                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};