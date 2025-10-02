class Solution {
public:
    int maxBottlesDrunk(int x, int y) {
        int sum = x;
        while(x>=y){
            x-= y - 1;
            sum++;
            y++;
        } 
        return sum;
    }
};