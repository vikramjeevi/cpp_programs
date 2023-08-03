#include<iostream>
int main()
{
    int row,col;
    std::cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            std::cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    std::cout<<sum;
}