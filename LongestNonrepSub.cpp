/*Given a string s, find the length of the longest substring without repeating characters.*/
int lengthOfLongestSubstring(string s) {
       if (s.empty()) return 0;
       unordered_set <char> sq;
       string sub = "";
       int max = 0;
        
       for (int i=0; i<s.length(); i++) {
           if (!(sq.insert(s[i]).second))
           {
               size_t found = sub.find(s[i]);
               if (found != std::string::npos)
               {
                   int j =0;
                   while (j<found)
                   {
                       char c = sub[0];
                       sub.erase(0,1); 
                       sq.erase(c);
                       j++;
                   }
               }
                                 
               char c = sub[0];
               sub.erase(0,1); 
               sq.erase(c);
               
               sub += s[i];
               sq.insert(s[i]);
           }
           
           else 
               sub += s[i];
           max = (max>sub.length())? max:sub.length();
       } 
        
        return max;
    }
