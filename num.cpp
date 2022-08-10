#include<iostream>
#include<string>
#include<cstring>
#include<vector>
// continue fix it;
int main() {
    std::string str;
    std::string str2;
    char *ch;
    std::vector<std::string> res;
    std::vector<int> num;
    bool last = false, last_n = false;
    int n = 0;
    int len;
    while (std::cin.get(*ch)) {
        // read a string; 
        if (*ch != 32 && *ch != 32) {
            while (*ch != 32 && *ch != 32) str.append(ch);
            len = str.size() - 1;
            if ((str[0] >= 'a' && str[0] <= 'z') || str[0] == 0) {
                last = false; 
                str.clear(); 
                continue;
            }
            else if (str[len] >= 'a' && str[len] <= 'z') {
                last = false;
                str.clear();
                continue;
            }
            else {
                for (int i = 0; i < len; i++)
                    if (str[0] >= '0' && str[0] <= '9') 
                        str2.append(str, i, 1);
            }
            last = true; //没有跳说明满足数字的条件;
        }
        if (*ch == 32) {
            // 出现空格
            if (last_n == true) {
                // 上一个是数字+换行;
                str = res.back();
                res.pop_back();
                str2.append(str);
            }
            res.push_back(str2);
            n++;
            last_n = false;
            str.clear();
            str2.clear();
            std::cout << "keyi dudao kongge" << std::endl;
        }

        if (*ch == 10) {
            // 出现换行;
            
            num.push_back(n);
            n = 0;
            if (last == true) last_n = true;
            str.clear();
            str2.clear();
            for (int i = 0; i < res.size(); i++)
                std::cout << res[i] << std::endl;
            for (int i = 0; i < num.size(); i++)
                std::cout << num[i] << std::endl;
        }

    }
    return 0;
}
