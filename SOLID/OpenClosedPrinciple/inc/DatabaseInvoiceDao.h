#ifndef DATABASEINVOICEDAO_H
#define DATABASEINVOICEDAO_H

#include "InvoiceDao.h"

class DatabaseInvoiceDao : public InvoiceDao{
    public:
        void save(Invoice invoice)(override);
};

#endif