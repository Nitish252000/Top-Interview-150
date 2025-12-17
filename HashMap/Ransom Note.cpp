class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.size() < ransomNote.size())
            return false;

        unordered_map<char, int> fq_mz;
        for (auto s : magazine) {
            fq_mz[s]++;
        }

        // for (auto i : ransomNote) {
        //     if (fq_mz.count(i) && fq_mz[i] != 0) {
        //         fq_mz[i]--;
        //     } else {
        //         return false;
        //     }
        // }
                    //or


        for(auto i:ransomNote){
            if(fq_mz[i]<1)return false;
            fq_mz[i]--;
        }
        return true;
    }
};
