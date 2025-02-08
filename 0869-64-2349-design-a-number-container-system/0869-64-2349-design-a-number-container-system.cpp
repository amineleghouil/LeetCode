class NumberContainers {
public:
    unordered_map<int, int> mp;
    unordered_map<int, set<int>> idx;
    NumberContainers() {
        mp.reserve(100000);
    }
    
    void change(int index, int number) {
        if (mp.count(index)){
            int x=mp[index];
            idx[x].erase(index); 
            if (idx[x].size()==0) idx.erase(x);
        }
        mp[index]=number;
        idx[number].insert(index);
    }
    
    int find(int number) {
        if (idx.count(number)==0) 
            return -1;
        return *(idx[number].begin());
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
