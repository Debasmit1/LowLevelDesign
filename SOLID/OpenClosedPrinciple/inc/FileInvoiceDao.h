#ifndef FILEINVOICEDAO_H
#define FILEINVOICEDAO_H

#include "InvoiceDao.h"

class FileInvoiceDao : public InvoiceDao{
    public:
        void safe(Invoice invoice)(override);
};

#endif