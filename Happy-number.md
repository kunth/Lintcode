http://www.lintcode.com/zh-cn/problem/happy-number/#

写一个算法来判断一个数是不是"快乐数"。
一个数是不是快乐是这么定义的：对于一个正整数，每一次将该数替换为他每个位置上的数字的平方和，然后重复这个过程直到这个数变为1，或是无限循环但始终变不到1。如果可以变为1，那么这个数就是快乐数。

// 19ms

```cpp

class Solution {
public:
    /**
     * @param n an integer
     * @return true if this is a happy number or false
     */
    unordered_map<int, bool>bucket;
    void split(int num, vector<int>& vec){
        vec.clear();
        while(num >= 10) {
            vec.push_back(num % 10);
            num /= 10;
        }
        vec.push_back(num);
    }
    int cnt_val(vector<int>& vec) {
        int sum = 0;
        for (int i = 0; i < vec.size(); ++i) {
            sum += vec[i] * vec[i];
        }
        return sum;
    }
    bool isHappy(int n) {
        // Write your code here
        int ret = -1;
        bucket[n] = true;
        vector<int>vec;
        do {
            split(n, vec);
            ret = cnt_val(vec);
            if (ret == 1) {
                return true;
            } else if (bucket[ret] == true) {
                return false;
            } else {
                bucket[ret] = true;
                n = ret;
            }
        } while (2);
       
        return false;
    }
};

```
