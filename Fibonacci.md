http://www.lintcode.com/zh-cn/problem/fibonacci/

查找斐波纳契数列中第 N 个数。
所谓的斐波纳契数列是指：

  * 前2个数是 0 和 1 。
  * 第 i 个数是第 i-1 个数和第i-2 个数的和。

斐波纳契数列的前10个数字是：
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...

```cpp
class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write you
        if (n <= 1)
            return 0;
        if (n == 2 || n == 3)
            return 1;
        vector<int> v(n, 1);
        for (int i = 2; i < n-1; ++i) {
            v[i] = v[i-1] + v[i-2];
        }
        return v[n-2];
    }
};
```
