class Solution {
public:

int gs(int num){
    int sum = 0;
    while(num!=0){
    sum+=num%10;
    num/=10;
    }
    return sum;
}
    int addDigits(int num) {
        int a = num;
        while(a>9){
            a = gs(a);
        }
        return a;
    }
};