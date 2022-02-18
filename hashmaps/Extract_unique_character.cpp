string uniqueChar(string s) {
	// Write your code here
    string ans ="";
    int hash[123] ={0};
    for(int i=0;i<s.length();i++){
        if(hash[s[i]]==0){
            hash[s[i]] =1;
            ans += s[i];
        }
    }
    return ans;
}