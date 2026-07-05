#include "receipt.hpp"

// TODO: Return the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    return item1 + item2 + item3;
}

// TODO: Return the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
    return subtotal * TAX_RATE; //achen: added spaces so it looks better
}

// TODO: Return the tip amount.
// Example: if subtotal is 20.00 and tipPercent is 15,
// the tip should be 3.00.
double calculateTip(double subtotal, double tipPercent) {
    return subtotal * (tipPercent / 100.0); //achen: added spaces and paratheses to make it more clear
}

// TODO: Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal + tax + tip; //achen: added spaces again
}