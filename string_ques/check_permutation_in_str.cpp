bool checkEqual(int a[26],int b[26]){
    int i;
    for(i=0;i<26;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len_s1 = s1.length(),len_s2 = s2.length();
        int window_size = len_s1;
        char new_char,old_char; 
    
        if(len_s2 < len_s1){
            return false;
        }
        
        int index,count1[26] = {0},count2[26] = {0};

        for(char i:s1){
            index = i-'a';
            count1[index]++;
        }

        int i=0;
        while(i<window_size ){
            index = s2[i] - 'a';
            count2[index]++;   
            i++;
        }

        if(checkEqual(count1,count2)){
            return true;
        }

        while(i<len_s2){
            new_char = s2[i];
            index = new_char - 'a';
            count2[index]++;
            old_char = s2[i-window_size];
            index = old_char - 'a';
            count2[index]--;
            i++;

            if(checkEqual(count1,count2)){
                return true;
            }
        }
        return false;
    }
};