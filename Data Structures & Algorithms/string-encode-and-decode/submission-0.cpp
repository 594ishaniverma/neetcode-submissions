class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(string s:strs){
            encoded_string +=to_string(s.length())+"#"+s;
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i=0;
        while(i<s.length()){
        //we will first find the delimiter starting from the index i;
        int j=s.find('#',i);
        //extract the length of the character from s
        int length=stoi(s.substr(i,j-i));
        //extract the exact string after the # from the s
        string word=s.substr(j+1,length);
        decoded_string.push_back(word);
        i=j+1+length;
        }
        return decoded_string;


    }
};
