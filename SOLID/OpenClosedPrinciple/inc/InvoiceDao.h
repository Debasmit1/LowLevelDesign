#ifndef INVOICEDAO_H
#define INVOICEDAO_H

#include "invoice.h"

// class InvoiceDao{
//     private:
//      Invoice invoice;
//     public:
//         public InvoiceDao(Invoice invoice);
//         void saveToDb();
// };

// In the above class if we add other method into the class then it disobey

class InvoiceDao{
    private:
        Invoice invoice;
    public:
        virtual void save(Invoice invoice) = 0;
};

#endif