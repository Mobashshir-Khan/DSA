#include<iostream>
using namespace std;

int BuyAndSell(int prize[], int size)
{
    int bestBuy = prize[0];
    int maxProfit = 0;
    for (int i=0; i<size; i++)
        {
            if (bestBuy < prize[i])
            {
                maxProfit = max(maxProfit, (prize[i]-bestBuy));
            }
            bestBuy = min(bestBuy, prize[i]);
        }
    return maxProfit;
}
int main()
{
    int prize[] = {7, 5, 3, 6, 4, 1};
    int size = sizeof(prize)/sizeof(prize[0]);

    cout<<BuyAndSell(prize, size);
    return 0;
}