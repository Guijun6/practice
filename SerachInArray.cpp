/在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();
        int i,j;
        for(i=0,j=col-1;i<row && j>=0;)
        {
            if(target == array[i][j])
                return true;
            if(target < array[i][j])
            {
                j--;
                continue;
            }
            if(target > array[i][j])
            {
                i++;
                continue;
            }  
        }
        return false;
    }
};
