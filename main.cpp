#include "src/fix_engine/FixParser.h"
#include "src/order_book/OrderBook.h"

int main()
{
    fix_parser::FixParser parser;
    parser.parse();

    order_book::OrderBook book;
    book.show();

    return 0;
}