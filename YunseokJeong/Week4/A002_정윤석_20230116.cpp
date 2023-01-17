#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;
        vector<int> temp;
        int coef;

        for (int i = 0; i < numRows; i++)
        {
            temp.clear();

            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || i == 0)
                    coef = 1;
                else
                    coef = coef * (i - j + 1) / j;

                temp.push_back(coef);
            }

            triangle.push_back(temp);
        }

        return triangle;
    }
};