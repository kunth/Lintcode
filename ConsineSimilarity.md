http://www.lintcode.com/zh-cn/problem/cosine-similarity/

Cosine similarity is a measure of similarity between two vectors of an inner product space that measures the cosine of the angle between them. The cosine of 0° is 1, and it is less than 1 for any other angle.
See wiki: Cosine Similarity
Here is the formula:

Given two vectors A and B with the same size, calculate the cosine similarity.
Return 2.0000 if cosine similarity is invalid (for example A = [0] and B = [0]).

``` cpp
class Solution {
public:
    /**
     * @param A: An integer array.
     * @param B: An integer array.
     * @return: Cosine similarity.
     */
    double cosineSimilarity(vector<int> A, vector<int> B) {
        // write your code here
        size_t sz = A.size();
        if(!sz)
            return 2.0000;
        double suma = 0.0, sumb = 0.0, val = 0.0;
        for (size_t i = 0; i<sz; ++i) {
            suma += A[i] * A[i];
            sumb += B[i] * B[i];
            val += A[i] * B[i];
        }
        if (fabs(suma) < 1e-6 || fabs(sumb) < 1e-6)
            return 2.0000;
        else
            return val / (sqrt(suma) * sqrt(sumb));
    }
};
```
