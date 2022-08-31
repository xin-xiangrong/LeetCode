class Solution {
    //判断是否为有效字符
    public boolean isEffectiveChar(char ch){
        if((ch>='a' && ch<='z') ||(ch>='0' && ch <= '9')){
            return true;
        }
        return false;
        //return Character.isDigit(ch) || Character.isLetter(ch);
        //return Character.isLetterOrDigit(ch);
    }
    
    public boolean isPalindrome(String s) {
        // 将大小写统一起来   
        s = s.toLowerCase();
        int left = 0;
        int right = s.length() - 1;   
        while(left < right){
            // 1. 从左侧找到一个有效的字符
            while(left < right && !isEffectiveChar(s.charAt(left))){
                left++;
            }
            // 2. 从右侧找到一个有效的字符
            while(left < right && !isEffectiveChar(s.charAt(right))){
                right--;
            }
            if(s.charAt(left) != s.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}