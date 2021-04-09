class Solution {
public:
    vector<int> countBits(int num) {
        if(num == 0)
            return vector<int>{0};
        vector<int> v(num+1);
        v[0] = 0;
        v[1] = 1;
        for(int i=2; i<=num; i++)
        {
            v[i] = v[i/2] + ((i%2 == 0)?0:1);
        }
        return v;
    }
};
