#include "Invoice.h"

Invoice::Invoice(Marker marker, int quantity):marker(marker),quantity(quantity){}
int Invoice::calculateTotal(){
    return marker.price * quantity;
}

InvoiceDao::InvoiceDao(Invoice invoice):invoice(invoice){}
void InvoiceDao::saveToDB(){
    // Save into the DB
}

InvoicePrinter::InvoicePrinter(Invoice invoice):invoice(invoice)
{}