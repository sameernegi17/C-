/*

Given matrix, a rectangular matrix of integers, where each value represents the cost of the room, your task is to return the total sum of all rooms that are suitable for the CodeBots (ie: add up all the values that don't appear below a 0).


matrix = [[0, 1, 1, 2], 
          [0, 5, 0, 0], 
          [2, 0, 3, 3]]


the output should be
matrixElementsSum(matrix) = 9.

*/

#include<vector>
#include <iostream>
#include <unordered_map>

int matrixElementsSum(std::vector<std::vector<int>> matrix) {

int sum = 0;
std::unordered_map<int,bool> map;

for(int i =0;i<matrix[0].size(); i++)
{
    map[i] = true;
}

for(int i = 0; i < matrix.size();i++ )
{ //00 01 02
    for(int j = 0 ; j < matrix[i].size(); j++)
    {
        if(matrix[i][j] == 0)
        {
            map[j] = false;
        }
        else if(map.find(j)->second)
        {
            sum = sum + matrix[i][j];
        }
    }
}

return sum;

}


int main()
{

    std::vector<std::vector<int>> matrix;
    matrix.push_back({0,1,1,2});
    matrix.push_back({0,5,0,0});
    matrix.push_back({2,0,3,3});

    std::cout << matrixElementsSum(matrix) << std::endl;
    return 0;
}