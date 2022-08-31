class Solution {
    //方法一
    public int countSegments(String s) {
        if(s == null) {
            return 0;
        }

        //先去掉字符串俩边的空格
        s = s.trim();
        if(s.length()==0){
            return 0;
        }

        //统计出空格块的个数
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == ' '){
                count++;
                while(i < s.length() && s.charAt(i) == ' '){
                    i++;
                }
            }
        }
        //空格块的个数+1就是字符串数
        return count + 1;
    }

    //方法二
    /*public int countSegments(String s) {
        if(s == null) {
            return 0;
        }

        //先去掉字符串俩边的空格
        s = s.trim();
        if(s.length()==0){
            return 0;
        }

        //以空格将字符串分割
        String[] strings = s.split(" ");
        int count = 0;

        for(int i = 0; i < strings.length; i++) {
            //统计非空字符串的个数
            if(strings[i].length() != 0) {
                count++;
            }
        }
        return count;
    }*/
}