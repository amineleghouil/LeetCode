class Solution {
public:
    int hammingDistance(int x, int y) {
    int ans=x^y;
    int ct=0;
    for(int i=0;i<32;i++){
        ct+=((ans>>i)&1);
    }
    return ct;
}
};