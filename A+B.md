http://www.lintcode.com/zh-cn/problem/a-b-problem/

给出两个整数a和b, 求他们的和, 但不能使用 + 等数学运算符。

``` cpp
class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        if (!b)
            return a;
        return aplusb(a^b, (a&b)<<1);
    }
};
```

a^b是值，a&b是进位

