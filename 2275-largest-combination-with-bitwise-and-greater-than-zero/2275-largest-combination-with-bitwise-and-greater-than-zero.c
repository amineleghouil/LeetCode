int largestCombination(int* candidates, int n) {
    int s = 0;
    int mx=1;  
    for (int i = 1; i <= mx; i *= 2) {
        int cnt = 0; 
        for (int j = 0; j < n; j++) {
            if (candidates[j] & i) {
                ++cnt; 
            }
            if(mx==1){
                if(mx <candidates[j])
                mx=candidates[j];
            }
        }
        if (cnt > s) {
            s = cnt;
        }
    }
    return s;
}

