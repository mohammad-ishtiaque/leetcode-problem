#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    for (int i = 0; i < image.size(); i++)
    {
        int start = 0;
        int end = image[i].size() - 1;
        while (start <= end)
        {
            swap(image[i][start], image[i][end]);
            start++;
            end--;
        }
        for (int j = 0; j < image[i].size(); j++)
        {
            if (image[i][j] == 0)
            {
                image[i][j] = 1;
            }
            else
            {
                image[i][j] = 0;
            }
        }
    }
    return image;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    vector<vector<int>> ig = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> ans = flipAndInvertImage(ig);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}