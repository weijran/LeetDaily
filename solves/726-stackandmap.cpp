class Solution {
    int round[1010] = {0};
    string ans;

public:
    string countOfAtoms(string formula) {
        stack<int> s; //左括号的位置//复用：存当前层级的倍数
        int totaltimes = 1;
        map<string, int> mymap;
        int n = formula.length();
        for (int i = 0; i < n;) {
            if (formula[i] == '(') {
                s.push(i);
                i++;
            } else if (formula[i] == ')') {
                i++;
                int num = 0;
                while (i < n && formula[i] >= '0' && formula[i] <= '9') {
                    num = num * 10 + formula[i] - '0';
                    i++;
                }
                if (num == 0)
                    num = 1;
                round[s.top()] = num;
                s.pop();
            } else {
                i++;
            }
        }
        /*for (int i = 0; i < n; i++) {
            if (round[i]) {
                printf("%d  %d\n", i, round[i]);
            }
        }*/
        
        for (int i = 0; i < n;) {
            if (formula[i] == '(') {
                s.push(round[i]);
                totaltimes *= round[i];
                i++;
            }
            else if (formula[i] == ')') {
                totaltimes/=s.top();
                s.pop();
                i++;
                //跳过右括号之后的数字
                while (i < n && formula[i] >= '0' && formula[i] <= '9') {
                    i++;
                }
            } else {
                // 一定会是大写字母
                string currElem;
                currElem += formula[i];
                i++;
                while (i < n && formula[i] >= 'a' && formula[i] <= 'z') {
                    currElem+=formula[i];
                    i++;
                }
                int num = 0;
                while (i < n && formula[i] >= '0' && formula[i] <= '9') {
                    num = num * 10 + formula[i] - '0';
                    i++;
                }
                if (num == 0)
                    num = 1;
                mymap[currElem] += num * totaltimes;
            }
        }
        for (auto & [k,v] : mymap) {
            ans += k;
            if (v != 1) ans += to_string(v);
        }
        return ans;
    }
};
