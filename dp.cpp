#include<iostream>
#include<string>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 查找"iflytek"子串
     * @param str string字符串 输入字符串
     * @return int整型
     */
    #define Max(a,b) a>b?a:b
    int dp[10005][10005];
    int a[10005],b[10];
    const int mod=1000000007;
    int findIflytek(std::string str) {
        int n = str.length();
        std::string b = "iflytek";
        int m = b.length();
        // write code here
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                dp[i][j]=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];// 可能出现负
                if(str[i-1]==b[j-1]) dp[i][j]+=dp[i-1][j-1]+1;
                std::cout<<str[i-1]<<std::endl;
            }
        return dp[n][m];
    }
};