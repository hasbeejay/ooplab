#include <iostream>
using namespace std;

// Enum for the different payment types
enum PaymentType {
    CASH,
    CREDIT_CARD,
    DIGITAL_WALLET
};
// Structure for cash payment details
struct Cash {
    double amount;
};
// Structure for credit card payment details
struct CreditCard {
    char cardNumber[25];
    char cardHolder[50];
    char expiryDate[10];
    int cvv;
};
// Structure for digital wallet payment details
struct DigitalWallet {
    char walletProvider[25];
    char walletID[50];
};
// Union to store one type of payment details at a time
union PaymentData {
    Cash cash;
    CreditCard creditCard;
    DigitalWallet digitalWallet;
};
// Structure combining the payment type and its details
struct Payment {
    PaymentType type;
    PaymentData data;
};
// Function to display the payment method menu
void displayMenu() {
    cout << "Select Payment Method:\n";
    cout << "A. Cash\n";
    cout << "B. Credit Card\n";
    cout << "C. Digital Wallet\n";
    cout << "Enter your choice: ";
}
// Function to display and process payment details
void displayPaymentDetails(Payment payment) {
    switch (payment.type) {
        case CASH:
            cout << "\n--- Cash Payment ---\n";
            cout << "Enter cash amount: ";
            cin >> payment.data.cash.amount;
            cout << "\nPayment Method: Cash" << endl;
            cout << "Cash Amount: $" << payment.data.cash.amount << endl;
            break;

        case CREDIT_CARD:
            cout << "\n--- Credit Card Payment ---\n";
            cout << "Enter credit card number: ";
            cin.getline(payment.data.creditCard.cardNumber, 25);
            cout << "Enter card holder name: ";
            cin.getline(payment.data.creditCard.cardHolder, 50);
            cout << "Enter expiration date (MM/YY): ";
            cin.getline(payment.data.creditCard.expiryDate, 10);
            cout << "Enter CVV: ";
            cin >> payment.data.creditCard.cvv;
            cout << "\nPayment Method: Credit Card" << endl;
            cout << "Card Number: " << payment.data.creditCard.cardNumber << endl;
            cout << "Card Holder: " << payment.data.creditCard.cardHolder << endl;
            cout << "Expiry Date: " << payment.data.creditCard.expiryDate << endl;
            cout << "CVV: " << payment.data.creditCard.cvv << endl;
            break;

        case DIGITAL_WALLET:
            cout << "\n--- Digital Wallet Payment ---\n";
            cout << "Enter digital wallet provider: ";
            cin.getline(payment.data.digitalWallet.walletProvider, 25);
            cout << "Enter wallet ID or email: ";
            cin.getline(payment.data.digitalWallet.walletID, 50);
            cout << "\nPayment Method: Digital Wallet" << endl;
            cout << "Wallet Provider: " << payment.data.digitalWallet.walletProvider << endl;
            cout << "Wallet ID: " << payment.data.digitalWallet.walletID << endl;
            break;
    }
}

int main() {
    restart:
    Payment payment;
    displayMenu();
    char choice;
    cin >> choice;
    cin.ignore();
    if (choice == 'A' || choice == 'a') {
        payment.type = CASH;
    } else if (choice == 'B' || choice == 'b') {
        payment.type = CREDIT_CARD;
    } else if (choice == 'C' || choice == 'c') {
        payment.type = DIGITAL_WALLET;
    } else {
        cout << "Invalid choice. Please try again.\n";
        goto restart;
    }
    displayPaymentDetails(payment);
    cout << "\nDo you want to make another payment? (y/n): ";
    char ch; cin >> ch;
    if (ch == 'y' || ch == 'Y') {
        cin.ignore();
        goto restart;
    }
    return 0;
}
