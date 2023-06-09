#include <iostream>

using namespace std;

//int main() {
//    int x = 10;
//    int y = 20;
//    cout << "x = " << x << endl
//         << "x = " << y;
//
//    return 0;
//}

int main() {
    int sales = 95000;
    double stateTax = 0.04;
    double countyTax = 0.02;

    double stateTaxTotal = sales * stateTax;
    double countyTaxTotal = sales * countyTax;
    double net = sales - stateTaxTotal - countyTaxTotal;

    cout << "Total State Tax Deducted: " << stateTaxTotal << endl
         << "Total County Tax Deducted: " << countyTaxTotal << endl
         << "Net Profit after taxes: " << net << endl;

}
