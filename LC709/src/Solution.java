class Solution {
    //方法一
    public String toLowerCase(String s) {
        StringBuilder str = new StringBuilder();
        
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i)>='A'&&s.charAt(i)<='Z'){
                str.append((char)(s.charAt(i) + 32));
            }else{
                str.append(s.charAt(i));
            }
        }
        
        return str.toString();
    }
    
    //方法二
    /*public String toLowerCase(String s) {
       char[] str = new char[s.length()];
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i)>='A' && s.charAt(i)<='Z'){
                int ch = s.charAt(i) + 32;
                str[i] = (char)ch;
            }else{
                str[i] = s.charAt(i);
            }
        }
        return new String(str);
    }
    */  
}