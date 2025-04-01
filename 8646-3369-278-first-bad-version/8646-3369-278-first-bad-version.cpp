// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int f=0,l=n;
        while (f<l){
            int mid = (l-f)/2 +f ;
            if(isBadVersion(mid)) l=mid;
            else f= mid +1;
        }
        return f;
    }
};