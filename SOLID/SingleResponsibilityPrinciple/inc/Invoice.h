#ifndef INVOICE_H
#define INVOICE_H

#include "Marker.h"

// class Invoice{
//     private:
//         Marker marker;
//         int quantity;
//     public:
//         Invoice(Marker marker,int quantity);
//         int calculateTotal();
//         void printInvoice();
//         void saveToDB();
// };

// According to the above code, there are three reason why the code can change.
// One being the change in calculation
// Second being the process of printing
// Third being the process of saving the program
// So the above is not following the SRP.

class Invoice{
   private:
    Marker marker;
    int quantity;
   public:
        Invoice(Marker marker,int quantity);
        int calculateTotal();
};

class InvoiceDao{
    private:
        Invoice invoice;
    public:
        InvoiceDao(Invoice invoice);
        void saveToDB();
};

class InvoicePrinter{
    private:
        Invoice invoice;
    public:
        InvoicePrinter(Invoice invoice);
};

#endif