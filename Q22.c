#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLossPercent;
    printf("enter the value of cp & sp :");
    // Input cost price and selling price
    scanf("%f %f", &costPrice, &sellingPrice);
    
    // Check profit or loss
    if (sellingPrice > costPrice) {
        profitOrLossPercent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%\n", profitOrLossPercent);
    } 
    else if (sellingPrice < costPrice) {
        profitOrLossPercent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%\n", profitOrLossPercent);
    } 
    else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
