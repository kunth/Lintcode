//http://www.lintcode.com/zh-cn/problem/length-of-last-word/

//给定一个字符串， 包含大小写字母、空格' '，请返回其最后一个单词的长度。
//如果不存在最后一个单词，请返回 0 

// 20ms
class Solution {
public:
  /**
   * @param s A string
   * @return the length of last word
   */
  int lengthOfLastWord(string& s) {
    // Write your code here
    size_t l = s.find_first_not_of(' ');
    size_t r = s.find_last_not_of(' ');
    if (l == -1 || r == -1)
      return 0;
    string str = s.substr(l, r-l+1);
    int pos = s.find_last_of(' ');
    if (pos == -1)
      return s.length();
    return s.length() - pos - 1;
  }
};
