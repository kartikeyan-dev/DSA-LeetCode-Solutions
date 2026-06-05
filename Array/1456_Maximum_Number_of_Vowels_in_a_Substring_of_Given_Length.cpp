class Solution {
public:
    int maxVowels(string s, int k) {
  int vowelcount=0;
  

   for(int j=k-1;j>=0;j--){ 
if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') { 
vowelcount++;
}
}
int maxcount=vowelcount;
for(int i=k;i<=s.size()-1;i++){  
if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u') 
vowelcount--;
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')  
vowelcount++;
maxcount=max(maxcount,vowelcount);
}
return maxcount; 


    }
};